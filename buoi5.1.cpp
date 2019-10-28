#include	<stdio.h>


void nhapmang(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		printf ("\n nhap (%d) :",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang (int a[], int n)
{
	for (int i=0; i<n;i++)
	{
			printf(" %4d",a[i]);
	}
}

int timX (int a[],int n, int x)
{
	int i;
	for (i=0;i<n;i++)
	
	if (a[i]==x)
	 	return i+1;
	 return -1;		
}
int TraCuu(int a[],int n, int y)
{
	int i, dem=0;
	for (i=0;i<n;i++)
		if (a[i]==y)
		{
			printf("\t a[%d]",i+1);
			dem++;
		}
	return dem;
}

int Xoa(int a[], int n,int k)
{ 
	int i;
	for (i=k;i<n;i++)
	a[i]=a[i+1];
	return n-1;
}
void lietkechiahet2(int a[],int n)
{
	int i;
	printf ("cac so chia het cho 2 la:");
	for (i=0;i<n;i++)
		if (a[i]%2==0)
		printf("%5d,a[i]");
}
int main ()
{
	int mangSoNguyen[100], n,x,z,t,c;
	printf (" nhap vao so luong phan tu : ");
	scanf("%d",&n);
	nhapmang(mangSoNguyen,n);
	printf("mang so nguyen vua nhap la");
	xuatmang(mangSoNguyen,n);
	printf ("\n nhap vao so x muon tim : ");
	scanf("%d",&x);
	if (timX(mangSoNguyen,n,x)==-1)
		printf("khong tim thay %d trong mang",x);
	else
	printf("vi tri cua %d trong mang la a[%d]",x,timX(mangSoNguyen,n,x));
	printf ("\n nhap vao so x can tra cuu : ");
	scanf("%d",&z);
	printf ("\n cac vi tri cua so %d trong ma la:",z);
	int y=TraCuu(mangSoNguyen,n,z);
	if (z==0)
		printf("khong co roi ban nhe");
	else
		printf("\n trong mang co %d phan tu %d",y,z);
	printf ("\n nhap vao so x xoa: ");
	scanf("%d",&t);
	n=Xoa(mangSoNguyen,n,t-1);
	xuatmang(mangSoNguyen,n);
	lietkechiahet2(mangSoNguyen,n);
	return 0;
	}
