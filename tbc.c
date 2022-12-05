#include <stdio.h>

int main()
{
	float a,b,c,tbc;
	printf("nhap diem mon Toan ");
	scanf("%f", &a);
	printf("\nnhap diem mon Ly ");
	scanf("%f", &b);
	printf("\nnhap diem mon Hoa ");
	scanf("%f", &c);
	tbc=(a+b+c)/3;
	printf("diem tbc la %.2f", tbc);
	return 0;
}

