#include <stdio.h>
void insert_sort(int a[],int n)
{
	int p;
	int i=0,j=0;
	for(i=1;i<n;i++)
	{
		p = a[i];
		j = i-1;
		while(p<a[j]&&j>=0)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = p;
	}

}
int main(int argc,char **argv)
{
	int a[100];
	int i=0;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insert_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;	
}

