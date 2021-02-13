#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(unsigned int num);

int main(int argc, char **argv) {
	unsigned int num = 0;
	if (argc > 1) {
		num = (unsigned long long)atoi(argv[1]);
	}
	if (!num) {
		scanf("%u", &num);
	}
	printf("%llu\n", factorial(num));
	return 0;
}

unsigned long long factorial(unsigned int num) {
	if (num == 0) {
		return 0;
	} else if (num <= 2) {
		return num;
	} else {
		return num * factorial(num-1);
	}
}
