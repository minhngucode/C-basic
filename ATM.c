#include <stdio.h>;
int main()
{
	int t,a,b,c,d,e,f,h;
	printf("nhap so tien \n ");
	scanf("%d", &t);
	a=t/500000;
	printf("so to 500k la %d \n",a);
	b=(t%500000)/200000;
	printf("so to 200k la %d \n",b);
	c=((t%500000)%200000)/100000;
	printf("so to 100k la %d \n",c);
	d=(((t%500000)%200000)%100000)/50000;
	printf("so to 50k la %d \n",d);
	e=((((t%500000)%200000)%100000)%50000)/20000;
	printf("so to 20k la %d \n",e);
	f=(((((t%500000)%200000)%100000)%50000)%20000)/10000;
	printf("so to 10k la %d \n",f);
	h=a+b+c+d+e+f;
	printf("tong so to tien la %d\n ",h);
	printf("DIT ME CODE");
	return 0;
}

