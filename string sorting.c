#include<stdio.h>
void order(char *a,int n)
{	int i,j,temp;
for( i=0;i<n;i++){
// printf("pass:%d",i+1);
for(j=i+1;j<n;j++)
{
	if(a[i]>a[j])
	{
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
}
}
// 0printarray(a,n);
}
}
int main()
{
	int n,i,temp;
	printf("Enter the range:");
	scanf("%d",&n);
	char a[n];
	printf("enter elements:");
	scanf("%s",a);
	order(a,n);
	printf("%s",a);	
	}



