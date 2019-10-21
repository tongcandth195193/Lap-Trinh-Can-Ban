#include<stdio.h>
 
long tinhGiaiThua(int n)
	{
	long kpuagiaithua=1;
	for (int i=1;i<= n; i++)
	kpuagiaithua *=1;
	return kpuagiaithua;
	}
int main ()
{
	int n,k;
	long kqtohop;
	printf ("\n Nhap vao 1 so nguyen :");
	scanf ("%d",&n);
	printf ("\n Nhap vao 1 so nguyen :");
	scanf ("%d",&k);
	kqtohop = tinhGiaiThua(n)/(tinhGiaiThua(k) * tinhGiaiThua(n-k));
	printf ("\n to hop chap cua %d cua %d la %li",k ,n ,kqtohop);
	return 0;
}
	
	
