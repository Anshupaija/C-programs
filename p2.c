#include<stdio.h>
int main(){
    int number;
    printf("Enter a Number:");
    scanf("\n%d",&number);
    number=(number*3)+7-10;
    printf("Value of Number is:%d",number);
    return 0;
}