#include <stdio.h>

int main() {
	int arr[5][10][20];

	arr[2][6][10] = 69;
	printf("%d", *(*(*(arr+2)+6)+10));
}