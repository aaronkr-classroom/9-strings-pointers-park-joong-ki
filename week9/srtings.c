#include <stdio.h>
#include <string.h>

int main(void) {

	char hello[6] = { 'H','e','l','l','o',0 };
	char world[6] = { 'W','o','r','l','d',0 };
	char ment[] = "C is fun!~";

	printf("%s %s\n %s\n", hello, world, ment);

	// ���ڿ� Don't worry, be happy! �����
	// ���ڿ� ������. �ູ�� �ž�. ����� ������ּ���.
	char a[] = "Don't worry, be happy!";
	char b[] = "������. �ູ�� �ž�.";

	printf("\n%s\n%s", a, b);

	getch();
	return 0;
}