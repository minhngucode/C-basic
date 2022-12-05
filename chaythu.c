#include <stdio.h>

int main()
{
	int a,b,n,m,t,c;
	printf("so lau ly ma ban an la ");
	scanf("%d",&a);
	n=17000*a;
	printf("tra dao an phim 1 \n");
	printf("tra sua an phim 2 \n");
	printf("sua chua an phim 3 \n");
	printf("ban uong gi ");
	scanf("%d",&m);
	printf("\nso ly ban uong la ");
	scanf("%d",&c);
	switch (m)
	{
		case 1:
			t=n+12000*c;
			printf("\nso tien ban phai tra la %d",t);
			break;
		case 2:
			t=n+15000*c;
			printf("\nso tien ban phai tra la %d",t);
			break;
		case 3:
			t=n+25000*c;
			printf("\nso tien ban phai tra la %d",t);
			break;
	}
	return 0;
}

