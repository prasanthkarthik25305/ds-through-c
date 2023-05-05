#include<stdio.h>
swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int lumoto(int *arr,int l,int r)
{ 
 int pv,i,j;
    pv=arr[r],i=l-1;j=l;
     //for(i=l-1;i<r)
   for(;j<r;j++)
   {
   	if(arr[j]<pv)
   	{
   		i++;
   		swap(&arr[i],&arr[j]);
	   }
   }
	swap(&arr[r],&arr[i+1]);
	  return i+1;
	
}
void quick_sort(int *arr,int l,int r)
{
	if(r>l)
	{
		int pv=lumoto(arr,l,r);
		quick_sort(arr,l,pv-1);
		quick_sort(arr,pv+1,r);
	}
}
int main()
{
	int n;
	printf("enter the range:");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter the element arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	 quick_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
