#include<stdio.h>
int Number(int a){
    while (a>=0){
        if(a==0){
            printf("%d",a);
        }
        else {
            printf("%d,", a);
        }
        a--;
    }
}
int main(void){
    int n;
    printf("enter the number for you want to print the all natural number");
    scanf("%d",&n);
    Number(n);
}