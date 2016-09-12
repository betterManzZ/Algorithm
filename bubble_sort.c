#include <stdio.h>

void bubble_sort1(int a[],int n)
{
	int i=0;
	int j=0;
	int temp = 0;
	int exchange = 1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void bubble_sort2(int a[],int n)
{
	int exchange=1;
	int i=0;
	int temp;
	while(n&&exchange==1)
	{
		exchange=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>a[i+1])
			{
				temp  = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
				exchange=1;
			}

		}
		n--;
	}
}
int main()
{
	int a[100];
	int n;
	int i;
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort2((int *)&a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	return 0;
}
