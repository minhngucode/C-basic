#include <stdio.h>

int main()
{
	char c;
	printf("nhap c ");
	scanf("%c",&c);
	c = toupper(c);
	printf(" % c \n ", c);
	return 0;
}

