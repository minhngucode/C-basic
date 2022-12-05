#include <stdio.h>

int main()
{
	float x,y;
	char operator;
	printf("nhap phep tinh "); scanf("%c",&operator);
	printf("nhap x = "); scanf("%f",&x);
	printf("nhap y = "); scanf("%f",&y);
	switch (operator)
	{
		case '+':
			printf("%f + %f = %f",x,y,x+y);
			break;
		case '-':
			printf("%f - %f = %f",x,y,x-y);
			break;
		case '*':
			printf("%f*%f = %f",x,y,x*y);
			break;
		case '/':
			printf("%f / %f = %f",x,y,x/y);
			break;
		default:
			printf("khong hop le");
	}
	return 0;
}

