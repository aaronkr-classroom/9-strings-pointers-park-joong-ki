#include <stdio.h>

void Swap1(int a, int b) {
	int temp = a;  // a=96, b =5, 
	a = b;
	b = temp;
}

void Swap2(int *pa, int *pb) {
	int temp = *pa;  
	*pa = *pb;
	*pb = temp;
}

int main(void) {
	int start = 96,
		end = 5;

	printf("Swap 1:\n");
	printf("before: start = %d, end = %d \n", start, end);
	if (start > end) Swap1(start, end);
	printf("after: start: %d, end = %d\n", start, end);

	printf("\nSwap 2:\n");
	printf("before: start = %d, end = %d \n", start, end);
	if (start > end) Swap2(&start, &end);
	printf("after: start: %d, end = %d\n", start, end);

	getch();
	return 0;
}