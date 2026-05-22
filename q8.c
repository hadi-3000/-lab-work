#include<stdio.h>
int main(){
    int n,i,sum,j ;
    sum = 0;
    printf(" enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        j = i*i;
        sum = sum + j;}
        printf(" the sum is %d",sum);
        
    
    return 0;} 
