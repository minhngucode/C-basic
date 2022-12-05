#include <stdio.h>

int main()
{
	float a,b,c,s;
	printf("nhap chieu dai ");
	scanf("%f", &a);
	printf("nhap chieu rong ");
	scanf("%f", &b);
	c=(a+b)/2;
	printf("chu vi la %.2f\n",c);
	s=a*b;
	printf("dien tinh la %.2f",s);
	
	return 0;
}

