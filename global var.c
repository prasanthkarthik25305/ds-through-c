#include<stdio.h>
int a=10;
void fun()
{
	printf(" from function fun %d",a);
}
int main()
{
	fun();
	printf("\n from main function:%d",a);
	return 0;
}
