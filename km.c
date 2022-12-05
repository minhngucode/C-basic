#include <stdio.h>

int main()
{
	float a,b,c;
	printf("nhap so km ");
	scanf("%f", &a);
	printf("nhap so fuel ");
	scanf("%f", &b);
	c=a/b;
	printf("ket qua tieu thu trung binh la %.1f",c);
	return 0;
}

