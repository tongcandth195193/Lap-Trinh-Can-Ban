#include	<stdio.h>
int KiemTraSoHoanHao(int n)
{
	int tongCacUoc = 0;
	for(int i=1; i<n; i++)
	{
	
		if(n%i==0)
			tongCacUoc = tongCacUoc +i;
		}
	if(tongCacUoc==n)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	printf("\n Nhap vao 1 so nguyen:");
	scanf("%d",&n);
	int kq=KiemTraSoHoanHao(n);
	if(kq==1)
		printf("\n %d la so hoan hao",n);
	else
		printf("\n %d khong phai la so hoan hao",n);
	return 0;
}
