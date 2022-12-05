#include <stdio.h>

int main()
{
	int a,b,c,d,max;
	printf("nhap a,b,c,d la \n");
	scanf("%d %d %d %d", &a , &b , &c , &d);
	max=a;
	if (a>b) 
	{
		if (a>c)
		{
			if (a>d)
			{
				max=a;
				printf("so lon nhat la %d", max);
			}else
			{
				max=d;
				printf("so lon nhat la %d", max);
			}
		}else if (c>d)
				{
					max=c;
					printf("so lon nhat la %d", max);
				}else
				{
					max=d;
					printf("so lon nhat la %d", max);
				}
	}else if (b>c)
			{
				if(b>d)
				{
					max=b;
					printf("so lon nhat la %d", max);
				}else 
				{
					max=d;
					printf("so lon nhat la %d",max);
				}
			}else 
			{
				if (c>d)
				{
					max=c;
					printf("so lon nhat la %d",max);
				}else 
				{
					max=d;
					printf("so lon nhat la %d",max);
				}
			}
	return 0;
}

