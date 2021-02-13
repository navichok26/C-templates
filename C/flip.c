#include <stdio.h>
#include <sodium.h>

int main(void) {
	unsigned char ans;
	if (sodium_init() < 0) {
		fprintf(stderr, "Error including sodium\n");
		return 1;
	}
	randombytes_buf(&ans, 1);
	ans %= 2;
	if (ans == 0) {
		printf("ОРЕЛ\n");
	} else {
		printf("РЕШКА\n");
	}
	return 0;
}
