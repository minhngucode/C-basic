#include <stdio.h>
#include <math.h>
int main()
{
	int opt,subopt,n,d;
	float a,b,c;
	printf("------------------\n");
	printf("|		MENU	  \n");
	printf("------------------\n");
	printf("1. Tinh toan------\n");
	printf("2. Tim max--------\n");
	printf("3. Ktra so 9phuong\n");
	printf("4. Cut------------\n");
	printf("chon so ");
	scanf("%d",&opt);
	switch (opt)
	{
		case 1:
			printf("nhap 2 so a va b \n");
			scanf("%f %f",&a,&b);
			printf("1. cong\n");
			printf("2. tru\n");
			printf("3. nhan\n");
			printf("4. chia\n");
			printf("chon phep tinh \n");
			scanf("%d",&subopt);
			switch (subopt)
			{
				case 1:
					printf("\n %.1f+%.1f=%.1f",a,b,a+b);
					break;
				case 2:
					printf("\n %.1f-%.1f=%.1f",a,b,a-b);
					break;
				case 3:
					printf("\n %.1f*%.1f=%.1f",a,b,a*b);
					break;
				case 4:
					printf("\n %.1f/%.1f=%.1f",a,b,a/b);
					break;
				default:
					printf("nhap ngu vcl");
					break;
			}
			break;
		case 2:
			printf("\nNhap 3 so a,b,c : ");
			scanf("%f%f%f",&a,&b,&c);
			float max=a;
			if (b>max)
			{
				max=b;
			}
			if (c>b)
			{
				max=c;
			}
			printf("so lon nhat la %f",max);
			break;
		case 3:
			printf("nhap vao so nguyen duong : ");
			scanf("%d",&n);
			if (n>0)
			{
				d=sqrt(n);
				if (d*d==n)
				{
					printf("%d la so chinh phuong",n);
				}else printf("%d khong phai la so chinh phuong",n);
			
			}
			break;
		case 4:
			printf("cut, hen gap lai");
		default:
			printf("nhap cai loz me m");
			break;
	}
	return 0;
}

