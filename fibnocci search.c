#include<stdio.h>
#define min(p,q) p<q?p:q
int fib(int *arr,int n,int se)
   {
	 int os=-1,c=0,b=1,a=0,index;
	 while(c<n)
	   {
		 a=b;
		 b=c;
		 c=a+b;
	   }	
	 
	 while(c>1){
	 	 index=min(os+a,n-1);
	     if(se==arr[index]) return index;
	      else if(se>arr[index])
	        {
		      c=b;
		      b=a;
		      a=c-b;
		      os=index;
	        }
	      else if(se<arr[index])
	        {
	 	     c=a;
		     b=b-a;
		     a=c-b;
	        }
	    }
     if(b&&arr[os+1]==se) return os+1;
      return -1;
    }
int main()
{
	int n,arr[200],se,i,res;
	printf("Enter range:");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
	 printf("enter elemnts arr[%d]:",i);
	 scanf("%d",&arr[i]);
    }
    printf("Enter the search element:");
    scanf("%d",&se);
    res=fib(arr,n,se);
    if(res==-1)
    printf("element not found");
    else
    printf("element found at %d index",res);
}
