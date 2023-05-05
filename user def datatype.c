#include<stdio.h>
struct book{
	char title[20];
	char author[10];
	int  pages;
	float price;
}b;
int main()
{
  printf("Enter name of  title,author,pages,price:");
  scanf("%s%s%d%f",b.title,b.author,&b.pages,&b.price);	
}

