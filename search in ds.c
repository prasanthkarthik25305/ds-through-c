#include<stdio.h>
int search(int *a,int n,int se)
{
	int lv=0,hv=n-1,mid;
	mid=(lv+hv)/2;
	while(lv<=hv)
	{
		if(a[mid]==se) return mid;
		else if(a[mid]<se) 
		lv=mid+1;
		else
		hv=mid-1;
	}
	return -1;	
}
int main()
{
	int n,a[50],i,se;
	printf("Enter range :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter elments a[%d]:",i);
	scanf("%d",&a[i]);
    }
    scanf("%d",&se);
    int res=search(a,n,se);
    if(res==-1)
    printf("Element not found");
    else
    printf("Element found at %d index",res);
}
