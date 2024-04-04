#include<stdio.h>
int main(){
    int one,two,three,four,five,answer;
    printf("Enter The value of One,Two,Three,Four,Five:");
    scanf("\n%d\n%d\n%d\n%d\n%d",&one,&two,&three,&four,&five);
    answer=one*two*three*four*five;
    printf("The Product of one,two,three,four,five is:%d",answer);
    return 0;
}