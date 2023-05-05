#include<stdio.h>
void merge(int *ar,int m,int *br,int n)
{
	int i,k,j;
	int res[m+n];
	for(k=0;k<m+n;)
	{
	for(i=0;i<m;){
		for(j=0;j<n;)
		{
			
	if(ar[i]<=br[j])
	{
	res[k++]=ar[i++];
	}
	else if(ar[i]>br[j])
	{
		res[k++]=br[j++];
	}
}
}
}
	for(k=0;k<m+n;k++)
	printf("%d ",res[k]);		
}
int main()
{
	int ar[50],br[50],n,m,i;
	printf("enter range:");
	scanf("%d%d",&m,&n);
	printf("enter first array:");
	for(i=0;i<m;i++)
	scanf("%d",&ar[i]);
	printf("enter second array:");
	for(i=0;i<n;i++)
	scanf("%d",&br[i]);
	merge(ar,m,br,n);
	return 0;	
}
