#include <stdio.h>

int main()
{
	float a,b,c,t;
	printf("nhap diem Toan, Ly, Hoa \n");
	scanf("%f%f%f", &a, &b, &c);
	t=a+b+c;
	if (t>=15)
	{ 
	if ((a>=4) && (b>=4) && (c>=4))
	{
	printf("dau \n");
	if ((a>5) && (b>5) && (c>5))
	 {
	 	printf("hoc deu cac mon");
	 }else 
	 printf("hoc chua deu cac mon");
	} else printf("hong");
	}
	else printf("hong");
	return 0;
}

