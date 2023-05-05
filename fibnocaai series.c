#include<stdio.h>
int fibnocii(int n)
{
	int a=0,b=1,c=0;
	while(c<n)
	{
	printf("%d ",c);
	a=b;
	b=c;
	c=a+b;
}
}
int main()
{
	int n;
	printf("enter the range:");
	scanf("%d",&n);
	fibnocii(n);
	
}
