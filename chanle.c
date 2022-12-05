#include <stdio.h>

int main()
{
	int a;
	printf("nhap a ");
	scanf("%d",&a);
	a=a%2;
	switch (a)
	{
		case 0:
			printf("so chan");
			break;
		case 1:
			printf("so le");
			break;
		default:
			printf("nhap so khong hop le");
	}
}
