#include <stdio.h>

int main()
{
	int a,b,c,t;
	printf("nhap so gio \n"); scanf("%d", &a);
	printf("nhap so phut \n"); scanf("%d", &b);
	printf("nhap so giay \n"); scanf("%d", &c);
	printf("%dh:%dm:%ds \n",a,b,c);
	printf("nhap so giay cong vao ");
	scanf("%d",t);
	c=c*0;
	b=b+1;
	printf("%dh:%dm:%ds \n",a,b,c);
