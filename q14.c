#include<stdio.h>
void change(int a);
void change(int a){
    a =77;
}
int main(){
int b = 22;
change(b);
printf("%d",b);
return 0;}
