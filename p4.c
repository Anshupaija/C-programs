#include<stdio.h>
int main(){
    int one,two,three,four,answer;
    printf("Enter The value of One,Two,Three,Four:");
    scanf("\n%d\n%d\n%d\n%d",&one,&two,&three,&four);
    answer=(one+two+three+four)*2;
    printf("The Sum of one,two,three,four is:%d",answer);
    return 0;
}