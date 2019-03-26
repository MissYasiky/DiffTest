#include <stdio.h>

void printArray(int array[], int count);

int main () {
	int a[] = {22,4,8,32,19,52,1,77,0,2,25};
	int count = sizeof(a)/sizeof(a[0]);
	printArray(a, count);
	return 0;
}

void printArray(int array[], int count) {
	for (int i = 0; i < count; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}