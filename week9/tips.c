#include <stdio.h>


void Test1(short data) {
	short soft = 0;
	soft = data;
	printf("soft = %d\n", soft);

}

void Test2(short* ptr) {
	short soft = 0;
	soft = *ptr;
	printf("soft =  %d\n", soft);

	*ptr = 3;
}


int main(void) {

	short tips = 5;
	printf("tips =%d\n", tips);
	Test1(tips);
	Test2(&tips); //皋葛府 林家 傈价

	printf("tips =%d\n", tips);

	getch();
	return 0;
}