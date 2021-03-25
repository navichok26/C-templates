#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#if defined(_WIN32)
	#define PLATFORM_NAME "windows"
#elif defined(_WIN64)
	#define PLATFORM_NAME "windows"
#elif defined(__CYGWIN__) && !defined(_WIN32)
	#define PLATFORM_NAME "cygwin"
#elif defined(__linux__)
	#define PLATFORM_NAME "linux"
#elif defined(__APPLE__) && defined(__MACH__)
	#define PLATFROM_NAME "osx"
#endif

string gen_command(string title, string text) {
	string command;
	stringstream buf;
	if (PLATFORM_NAME == "linux") {
		buf << "notify-send \"" << title << "\" \"" << text << "\"";
	} else if (PLATFORM_NAME == "osx") {
		buf << "osascript -e \' display notification \"" << text << "\" with title \"" << title << "\"\'";
	} else {
		buf << "";
	}
	command = buf.str();
	return command;
}

void show_notify(string title, string text) {
	string command = gen_command(title, text);
	system(command.c_str());
}

int main() {
	if (PLATFORM_NAME != "linux" && PLATFORM_NAME != "osx") {
		cout << "Ваша OS " << PLATFORM_NAME << " не поддерживается!" << endl;
		return 1;
	}
	show_notify("Hello", "Hello world");
	return 0;
}
