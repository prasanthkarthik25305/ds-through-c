#include<stdio.h>
#include<stdlib.h>
int main() {
	int n=5;
	int *arr=(int *)malloc(n*sizeof(int));
	    int i;
	    for(i=0;i<5;i++) {
	    	scanf("%d",&arr[i]);
		}
	for(i=0;i<5;i++) {
		printf("%d ",*(arr+i));// 1000+4
	}
}
