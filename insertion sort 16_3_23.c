#include<stdio.h>
int insert(int n,int *arr)
{
	int i,j,key;
	key=arr[i];
	for(i=1;i<n;i++)
	{
		key=arr[i];
		for(j=i-1;;j--)
		{
			if(arr[j]<key || j==-1)
			{
			arr[j+1]=key;
			break;
	     	}
		 else
		 {
		   arr[j+1]=arr[j];
		
		 }
	    }
	}
}
int main()
{
	int n,i,j,arr[100];
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Element arr[%d]:",i);
	scanf("%d",&arr[i]);
    }
	insert(n,arr);
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
