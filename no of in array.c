#include<stdio.h>
#include<string.h>
int main() {
int a={2,3,4,5,6},i;
for(i=0;i<4;i++){
    if(a[i]<a[i+1])
printf("%d",a[i+1]);
}
