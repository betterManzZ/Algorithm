#include <stdio.h>

void select_sort(int a[],int n)
{
	int i,j;
	int min;
	int temp;
	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min = j;
			}
		}
		if(min!=i)
		{
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}
}


int main()
{
	int a[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	select_sort((int *)&a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
