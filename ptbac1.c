#include <stdio.h>

int main()
{
	//ax+b=0
	float a,b,x;
	printf("nhap he so a = ");
	scanf("%f", &a);
	printf("nhap he so b = ");
	scanf("%f", &b);
	x=-b/a;
	printf("nghiem x = %.5f ",x);
	return 0;
}

