#include <stdio.h>

int main(void){
	short birthday;
	short* ptr;  //������ ���� ������
	ptr = &birthday; //birthday ������ �ּҸ� ptr �ͼ��� ������

	int intvar = 42;
	float floatvar = 3.14;
	char charvar = 'A';
	double doublevar = 9.81;


	int* intPtr = &intvar;
	char* charPtr = &charvar;
	float* floatPtr = &floatvar;
	double* doublePtr = &doublevar;

	//%p ������ �޸� �ּҸ� 16���� �������� �����
	printf("birthday ������ �ּҴ� %p�Դϴ�.\n",ptr);

	printf("intvar ���� ��: %d, �ּ�: %p\n", *intPtr, intPtr);
	printf("floatvar ���� ��: %.2f, �ּ�: %p\n", *floatPtr, floatPtr);
	printf("charvar ���� ��: %c, �ּ�: %p\n", *charPtr, charPtr);
	printf("doublevar ���� ��: %.2f, �ּ�: %p\n", *doublePtr, doublePtr);

	getch();

	return 0;
}