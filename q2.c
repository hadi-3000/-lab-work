// largest of two numbers.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the two numbers:");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is the largest number",a);}
        else if(b>a) {
            printf("%d is the largest number",b);
        }
        else{
            printf("both numbers are equal");
        }
        return 0;

    }
