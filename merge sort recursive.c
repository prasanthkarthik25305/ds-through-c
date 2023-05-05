#include<stdio.h>
void merge(int *arr,int l,int m,int r){
	 int res[r-l+1];// r does not need to start from certain
	  int k=0,i=l,j=m+1;
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
	       k=0;
	       for(i=l;i<=r;i++)
	      {
	       arr[i]=res[k++];
          }
    }
  void merge_sort_rec(int *arr,int l,int r)
    {
    	int m;
    	if(l<r){
		m=(l+r)/2;
    	merge_sort_rec(arr,l,m);
    	merge_sort_rec(arr,m+1,r);
    	merge(arr,l,m,r);
	  }
	}
	int main()
{
	int arr[100],n,i;
	printf("Enter the range:");
	scanf("%d",&n);
	//l=0;
	for(i=0;i<n;i++)
	{
	printf("enter the element arr[%d]:",i);
	scanf("%d",&arr[i]);
    }
    merge_sort_rec(arr,0,n-1);
	printf("result:");
	for(i=0;i<n;i++)
	{
      printf("%d ",arr[i]);
	}
	return 0;
}
