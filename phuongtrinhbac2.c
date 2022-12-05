#include <stdio.h>

int main()
{
	// ax^2 + bx + c = 0
	float a,b,c,x1,x2,D;
	printf("nhap he so a, b, c \n");
	scanf("%f%f%f",&a ,&b ,&c);
	D=b*b-4*a*c;
	printf("Delta = %f \n",D);
	if (D<0)
	{
		printf("phuong trinh vo nghiem");
	 }
	 else if (D==0)
	 	{
	 		x1=-b/(2*a);
	 		printf("phuong trinh co nghiem kep x1=x2= %f",x1);
		 }
		 else {
		 		x1=(-b+sqrt(D))/(2*a);
				printf("x1= %f\n", x1);
				x2=(-b-sqrt(D))/(2*a);
				printf("x2= la %f", x2);
		 }
	return 0;
}

