#include<stdio.h>
void merge(int *arr,int l,int m,int r){
	int res[r-l+1];// r does not need to start from certain
	int k=0,z,i=l,j=m+1;
	while(i<=m && j<=r)
	{
		if(arr[i]<=arr[j])
		  res[k++]=arr[i++];
		else
		  res[k++]=arr[j++];
	}
	while(i<=m)
	  res[k++]=arr[i++];
	while(j<=r)
	  res[k++]=arr[j++];
	for(z=l;z<=r;z++)
	{
	  printf("%d ",res[z]);
    }
}
int main()
{
	int arr[100],r,l,m,i;
	printf("Enter the range:");
	scanf("%d",&r);
	l=0;
	m=(l+r)/2;
	for(i=0;i<r;i++)
	{
	printf("enter the element arr[%d]",i);
	scanf("%d",&arr[i]);
    }
	merge(arr,l,m,r);
	return 0;
}
