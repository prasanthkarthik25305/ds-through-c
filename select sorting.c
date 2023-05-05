#include<stdio.h>
void select(int *a,int n)
{
	int i,j,temp,min_mid;
	for(i=0;i<n;i++)
	{
		min_mid=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min_mid])
			min_mid=j;
		}
		    if(min_mid !=i)
		    {
			temp=a[i];
			a[i]=a[min_mid];
			a[min_mid]=temp;
		}
	}
}
int main()
{
	int n,a[100],i;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	select(a,n);
	printf("sorted list:");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
