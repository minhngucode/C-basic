#include <stdio.h>

int main()
{
	char a;
	printf("nhap ky tu ");
	scanf("%c", &a);
	int m=a;
	if ((m>=48) && (m<=57))
	{
		printf("nhap so cmm a ?");
	}else if (((m>='A') && (m<='Z')) || ((m>='a') && (m<='z')))
				{
					switch (a)
					{
						case 'u':
						case 'e':
						case 'o':
						case 'a':
						case 'i':
						case 'y':
						case 'U':
						case 'E':
						case 'O':
						case 'A':
						case 'I':
							printf("nguyen am");
							break;
						default:
							printf("phu am");
							break;	
					}
				} else printf("nhap ky tu an loz a ?");
			
	return 0;
}

