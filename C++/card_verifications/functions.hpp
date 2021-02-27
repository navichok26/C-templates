#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<uint8_t> string_to_vector(string st);
bool verification_card_number(vector<uint8_t> numbers);
uint8_t digit_sum(uint8_t num);
void test();