#include <stdio.h>

int main()
{
	int n,a,b,c,t;
	printf("nhap so co 3 chu so = ");
	scanf("%d", &n);
	a=n/100;
	b=(n%100)/10;
	c=(n%100)%10;
	t=a+b+c;
	printf("tong chu so la %d ",t);
	return 0;
}

