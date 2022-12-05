#include <stdio.h> //chua xong
#include <math.h>
int main()
{
	float a,b,c,p,s;
	printf("tinh dien tich tam giac theo cong thuc Heron \n");
	printf("a = "); scanf("%f", &a);
	printf("b = "); scanf("%f", &b);
	printf("c = "); scanf("%f", &c);
	p=(a+b+c)/3;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("S = %f", s);
	return 0;
}

