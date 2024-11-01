#include <stdio.h>

int main(void){
	short birthday;
	short* ptr;  //포인터 변수 선언함
	ptr = &birthday; //birthday 변수의 주소를 ptr 뵨수에 대입함

	int intvar = 42;
	float floatvar = 3.14;
	char charvar = 'A';
	double doublevar = 9.81;


	int* intPtr = &intvar;
	char* charPtr = &charvar;
	float* floatPtr = &floatvar;
	double* doublePtr = &doublevar;

	//%p 형식은 메모리 주소를 16진수 형식으로 출력함
	printf("birthday 변수의 주소는 %p입니다.\n",ptr);

	printf("intvar 변수 값: %d, 주소: %p\n", *intPtr, intPtr);
	printf("floatvar 변수 값: %.2f, 주소: %p\n", *floatPtr, floatPtr);
	printf("charvar 변수 값: %c, 주소: %p\n", *charPtr, charPtr);
	printf("doublevar 변수 값: %.2f, 주소: %p\n", *doublePtr, doublePtr);

	getch();

	return 0;
}