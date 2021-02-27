#include "functions.hpp"

void program() {
	string card_number;
	getline(cin, card_number);

	vector<uint8_t> vec;
	auto sw = remove(card_number.begin(), card_number.end(), ' ');
	card_number.erase(sw, card_number.end());
	if (card_number.length() == 16) {
		vec = string_to_vector(card_number);
	}
	if (vec.size() <= 0) {
		cerr << "Error!!!" << endl;
		return;
	}
	bool result = verification_card_number(vec);
	if (result) {
		cout << "Ok." << endl;
	} else {
		cout << "Not ok." << endl;
	}
}

int main(int argc, char **argv) {
	program();

	return 0;
}

