#include<stdio.h>
int main(){
    int one,two,three,four,five,six,sum1,sum2;
    printf("\nEnter The Value Of one,two,three,four,five,six");
    scanf("\n%d\n%d\n%d\n%d\n%d\n%d",&one,&two,&three,&four,&five,&six);
    sum1=one+two;
    sum2=four+five;
    printf("\nSum Of one & two:",sum1);
    printf("\nSum of four & five:",sum2);
    if(sum1>three && sum2>six){
        printf("Yess!!!");
    }
    else{
        printf("Noo!!!");
    }
    return 0;
}