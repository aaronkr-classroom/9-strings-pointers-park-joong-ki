#include <stdio.h>

int main(void) {
	int x = 10,
		y = 20;

	int* const p1 = &x;  //�ּҴ� ���� �Ұ�, �� ���� ����
	*p1 = 15;
	printf("p1 points to value: %d\n", *p1);
	//p1 = &y; �Ұ���

	const int* p2 = &x; // �ּ� ���� ����, �� ���� �Ұ���
	p2 = &y;
	printf("p2 points to value: %d\n", *p2);
	// *p2= 25 �Ұ�

	const int* const p3 = &x; //�ּҿ� �� ���� �Ұ�
	printf("p3 points to value: %d\n", *p3);
	//*p = 30; �Ұ�

	return 0;
}