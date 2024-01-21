#include <stdio.h>

void teller(char* msg) {
	printf("teller: %s\n", msg);
}

typedef void (*F_PTR)(char*);
void caller(char *msg, F_PTR fp) {
	fp(msg);
}

int main() {
	caller("Hello", &teller);

	return 0;
}