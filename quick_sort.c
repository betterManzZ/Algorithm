#include <stdio.h>
void quick_sort(int a[],int start,int end)
{
	int p=a[start];
	int i = start;
	int j = end;
	if(start<end)
	{
		while(i<j)
		{
			while(i<j&&p<=a[j])
				j--;
			a[i] = a[j];
			while(i<j&&p>a[i])
				i++;
			a[j] = a[i];
		}
		a[i] = p;
		quick_sort(a,start,i-1);
		quick_sort(a,i+1,end);
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
	quick_sort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;	
}

