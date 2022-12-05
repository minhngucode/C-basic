#include <stdio.h>

int main()
{
	int a,b,c;
	printf("nhap ngay thang nam \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("ngay thang nam la %d/%d/%d \n",a,b,c);
	
	switch (b)
	{
		case 1: if (a==1)
				{
					printf("ngay hom truoc la 31/12/%d \n",c-1);
					printf("ngay hom sau la 2/1/%d \n",c);
				}else
				{
					a=a-1;
					printf("ngay hom truoc la %d/%d/%d \n",a,b,c);
					a=a+2;
					printf("ngay hom sau la %d/%d/%d \n",a,b,c);
				}
				break;
		case 12: if (a==31)
				{
					printf("ngay hom truoc la 30/12/%d \n",c);
					printf("ngay hom sau la 1/1/%d \n",c+1);
				}else
				{
					a=a-1;
					printf("ngay hom truoc la %d/%d/%d \n",a,b,c);
					a=a+2;
					printf("ngay hom sau la %d/%d/%d \n",a,b,c);
				}
				break;
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		if (a==31)
		{
			a=a-1;
			printf("ngay hom truoc la %d/%d/%d \n",a,b,c);
			a=1;
			b=b+1;
			printf("ngay hom sau la %d/%d/%d \n",a,b,c);
		}else if (a==1)
		{
			if ((b==8) || (b=10))
			{
				printf("ngay hom truoc la 31/%d/%d",b-1,c);
				printf("ngay hom sau la 2/%d/%d \n",b,c);
			}else 
			{
				printf("ngay hom truoc la 30/%d/%d \n",b-1,c);
				printf("ngay hom sau la 2/%d/%d \n",b,c);
			}
		}else
		{
			a=a-1;
			printf("ngay hom truoc la %d/%d/%d \n",a,b,c);
			a=a+2;
			printf("ngay hom sau la %d/%d/%d",a,b,c);
		}
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		if (a==30)
		{
			a=a-1;
			printf("ngay hom truoc la %d/%d/%d \n",a,b,c);
			a=1;
			b=b+1;
			printf("ngay hom sau la %d/%d/%d \n",a,b,c);
		}else
		{
			a=a-1;
			printf("ngay hom truoc la %d/%d/%d \n",a,b,c);
			a=a+2;
			printf("ngay hom sau la %d/%d/%d \n",a,b,c);
		}
		break;
		case 2:
			if (a==28)
			{
			printf("ngay hom truoc la 27/2/%d \n",c);
			printf("ngay hom sau la 1/3/%d \n",c);
			}else if (a!=1)
			{
				a=a-1;
				printf("ngay hom truoc la %d/%d/%d\n",a,b,c);
				a=a+2;
				printf("ngay hom sau la %d/%d/%d\n",a,b,c);
			}else 
			{
				printf("ngay hom truoc la 31/1/%d\n",c);
				printf("ngay hom sau la 2/1/%d",c);
			}
			break;
		default:
			printf("so thang khong hop le");
	}
}
