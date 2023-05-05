#include<stdio.h>
void printarray(int *a,int n)
{ int i;
	for( i=0;i<n;i++)
	{
	printf("%d",a[i]);
}
printf("\n");
}
int order(int *a,int n,int temp)
{	int i,j;
for( i=0;i<n;i++){
printf("pass:%d",i+1);
for(j=i+1;j<n;j++)
	if(a[i]>a[j])
	{
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
}
printarray(a,n);
}
}
int main()
{
	int n,a[n],i,sort,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=0;
	sort=order(a,n,temp);
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
	}

	
