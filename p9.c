#include<stdio.h>
int main(){
    int one,two,three,four;
    printf("Enter The Value of One,Two,Three,Four:");
    scanf("\n%d\n%d\n%d\n%d",&one,&two,&three,&four);
    printf("Values:%d,%d,%d,%d",one,two,three,four);
    if(one>two && three>four){
        printf("Yess!!!");
    }
    else{
        printf("Noo!!!");
    }
    return 0;
}