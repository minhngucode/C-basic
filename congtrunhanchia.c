#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("a="); 
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("phep cong %d va %d la %d.\n", a,b, a+b);
	printf("phep tru %d va %d la %d.\n", a, b, a-b);
	printf("phep nhan %d va %d la %d.\n", a,b, a*b);
	printf("phep chia %d va %d la %f.\n", a,b, (float)a/b);
	return 0;
}

