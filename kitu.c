#include <stdio.h>

int main()
{
	char a;
	printf("nhap ky tu ");
	scanf("%c", &a);
	int m=a;
	if ((m>=65) && (m<=90))
	{
		a=tolower(a);
		printf(" %c ",a);
	}else if ((m>=97) && (m<=122))
		{
			a=toupper(a);
			printf(" %c ",a);
		}else if ((m>=48) && (m<=57)) 
			{
				printf("so ban vua nhap la %c",a);
			}else printf("ban da nhap ki tu %c ",a);
	return 0;
}

