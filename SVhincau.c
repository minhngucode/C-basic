#include <stdio.h>

int main()
{
	float a;
	const float Pi=3.14;
	float s,v;
	printf("nhap ban kinh = ");
	scanf("%f", &a);
	s=4*3.14*a*a;
	v=(4/3)*Pi*a*a*a;
	printf("dien tich la %lf \n",s);
	printf("the tich la %lf",v);
	
	return 0;
}

