#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,d;
	float a,b,c;
	printf("---------------------------\n");
	printf("|	        MENU           \n");
	printf("---------------------------\n");
	printf("1. bang cuu chuong---------\n");
	printf("2. nhap thu ngay-----------\n");
	printf("3. kiem tra 3 canh tam giac\n");
	printf("4. ----------CUT--------\n");
	printf("chon so ");
	scanf("%d",&m);
	switch (m)
	{
		case 1:
			printf("nhap so \n");
			scanf("%f",&a);
			printf("%f*1=%f \n",a,a);
			printf("%f*2=%f \n",a,a*2);
			printf("%f*3=%f \n",a,a*3);
			printf("%f*4=%f \n",a,a*4);
			printf("%f*5=%f \n",a,a*5);
			printf("%f*6=%f \n",a,a*6);
			printf("%f*7=%f \n",a,a*7);
			printf("%f*8=%f \n",a,a*8);
			printf("%f*9=%f \n",a,a*9);
			printf("%f*10=%f \n",a,a*10);
			break;
		case 2:
			printf("\nNhap a ");
			scanf("%d",&d);
			switch (d)
			{
				case 6:
					printf("chu nhat");
					break;
				case 0:
					printf("thu hai");
					break;
				case 1:
					printf("thu ba");
					break;
				case 2:
					printf("thu tu");
					break;
				case 3:
					printf("thu nam");
					break;
				case 4:
					printf("thu sau");
					break;
				case 5:
					printf("thu bay");
					break;
				default:
					printf("nhap cmm");
					break;	
			}
			break;	
		case 3:
			printf("nhap vao a,b,c :\n ");
			scanf("%f%f%f",&a,&b,&c);
			if ((a+b)>c && (a+c)>b && (b+c)>a)
				printf("%f %f %f la ba canh tam giac",a,b,c);	
			else printf("cut");
			break;
		case 4:
			printf("cut, hen gap lai");
			break;
		default:
			printf("nhap cai loz me m");
			break;
	}
	return 0;
}

