#include<stdio.h>
int main(){
    int i,j, n =3;
    for(i=1;i<=3;i++){
       
    
    for(j=1;j<=n-i ;j++){
        printf(" ");
    }
    for(j=1;j<=i;j++){
    printf("* ");}

    printf("\n");}
    return 0;

}
