#include <stdio.h>

int main()
{
	float a,bp,lp,b;
	printf("a=");
	scanf("%f", &a);
	bp=a*a;
	lp=a*a*a;
	b=a*a*a*a;
	printf("binh phuong a la %f\n",bp);
	printf("lap phuong a la %f\n",lp);
	printf("mu bon cua a la %f\n",b);
	return 0;
}

