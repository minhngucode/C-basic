#include <stdio.h>

int main()
{
	int a,b,c,t;
	printf("nhap so gio \n"); scanf("%d", &a);
	printf("nhap so phut \n"); scanf("%d", &b);
	printf("nhap so giay \n"); scanf("%d", &c);
	printf("%dh:%dm:%ds \n",a,b,c);
	printf("nhap so giay cong vao ");
	scanf("%d",&t);
	if (t<0)
	{
		printf("nhap so am an loz");
	}else
	{
		c+=t;
		b+=c/60;
		c=c%60;
		a+=b/60;
		b=b%60;
		printf("%dh:%dm:%ds \n",a,b,c);
	}
	return 0;
}

