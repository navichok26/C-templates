#include "functions.hpp"

vector<uint8_t> string_to_vector(string st){
	vector<uint8_t> result;
	stringstream buf;
	for (uint8_t i = 0; i < st.length(); i++){
		uint8_t n;
		buf << st[i];
		buf >> n;
		result.push_back(n);
	}
	return result;
}

bool verification_card_number(vector<uint8_t> numbers){
    uint16_t sum = 0;
	for (unsigned char i = 0; i < numbers.size(); i++){
		if (i%2 == 0){
			if (numbers[i]*2 > 9){
				numbers[i] = digit_sum(numbers[i]*2);
			} else {
				numbers[i] = numbers[i]*2;
			}
		}
        sum += numbers[i];
	}
    if (sum%10 == 0) {
        return true;
    }
    return false;
}

uint8_t digit_sum(uint8_t num){
	uint8_t sum = 0;
	while (num){
		sum += num%10;
		num /= 10;
	}
	return sum;
}

void test(){
    uint8_t n = 134;
    if (digit_sum(n) == 8) {
        cout << "Good!" << endl;
    } else {
        cout << "Error!" << endl;
    }
}