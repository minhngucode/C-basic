#include <stdio.h>

int main()
{
	int a;
	printf("nhap thang "); scanf("%d",&a);
	switch (a)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\nthang %d co 31 ngay",a);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\nthang %d co 30 ngay",a);
			break;
		case 2:
			printf("thang 2 co 28 ngay");
			break;
		default:
			printf("so thang khong hop le");
	}
	return 0;
}

