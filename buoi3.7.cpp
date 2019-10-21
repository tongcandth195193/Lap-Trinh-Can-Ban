#include<stdio.h>
#include<math.h>
int uocchungcua2so(int a,int b)
{
	for (int i=a ;i>=1  ;i--)
		if(a%i==0 && b%i==0)
	return i;			
}
int main()
{
	int a,b;	printf("nhap a:a= ");
	scanf("%d",&a);
	printf("nhap b:b= ");
	scanf("%d",&b);
	int UCLN=uocchungcua2so(a,b);
	printf("UCLN cua 2 so la %d", UCLN);
	return 0;
	
}
