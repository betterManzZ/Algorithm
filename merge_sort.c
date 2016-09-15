#include <stdio.h>
#include <stdlib.h>
//归并排序，采用分治发的思想，先将数组切分，然后合并。
void merge_sort(int a[],int s,int mid,int end)
{
	int i = s;
	int j = mid+1;
	int p=0;
	int *temp;
	if(a==NULL)
	{
		return ;
	}
	if(s==end)
	{
		return ;//递归出口
	}
	merge_sort(a,s,(s+mid)/2,mid);
	merge_sort(a,mid+1,(mid+1+end)/2,end);
	temp = (int *)malloc((end-s+1)*sizeof(int));
	if(temp==NULL)
	{
		return ;
	}
	while(i<=mid&&j<=end)
	{
		*(temp+p++) = (a[i]<a[j])?a[i++]:a[j++];
	}
	while(i<=mid)
	{
		*(temp+p++) = a[i++];
	}
	while(j<=end)
	{
		*(temp+p++) = a[j++];
	}
	for(i=s,p=0;i<=end;i++,p++)
	{
		a[i] = *(temp+p);
	}
	free(temp);
}

int main(int argc,char **argv)
{
	int a[100];
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,(n-1)/2,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
