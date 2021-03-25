#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void get_time(char *output_str, struct tm *date);
void delay(unsigned long ms);

int main(void) {
	time_t timer;
	struct tm *date;
	char format_time[10];
	while (1) {
		timer = time(NULL);
		date = localtime(&timer);
		get_time(format_time, date);
		printf("%s\n", format_time);
		delay(1000);
	}
	return 0;
}

void get_time(char *output_str, struct tm *date) {
	size_t len_str = 10;
	const char *format_str = "%T";
	char result[len_str];
	size_t res = strftime(result, len_str, format_str, date);
	if (res == 0) {
		fprintf(stderr, "Out of memory!\n");
		return;
	}
	strcpy(output_str, result);
}

void delay(unsigned long ms) {
	unsigned long c = clock() + ms;
	while (clock() < c);
}
