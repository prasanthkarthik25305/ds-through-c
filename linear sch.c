#include<stdio.h>
int lin(int *arr,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)
		return i;
	}
	return -1;
}
int main()
{
	int n,arr[100],se,i;
	printf("Enter the range and search element:");
	scanf("%d%d",&n,&se);
	for(i=0;i<n;i++)
	{
		printf("Enter the element arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	int k;
	k=lin(arr,n,se);
	if(k==-1)
	printf("element not found");
	else
	printf("element found at %d index",k);
}
