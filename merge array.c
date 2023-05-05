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
	int arr[100],n,l,m,i;
	printf("Enter the range:");
	scanf("%d",&n);
	
	l=0;
	if(n%2!=0)
	m=(l+(n-1))/2;
	else
	m=(l+n)/2;
	for(i=0;i<n;i++)
	{
	printf("enter the element arr[%d]:",i);
	scanf("%d",&arr[i]);
    }
	merge(arr,l,m,n-1);
	return 0;
}
