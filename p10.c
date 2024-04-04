#include<stdio.h>
int main(){
    int one,two,three,four,five,product;
    printf("\nEnter The Values For One,Two,Three,Four,Five:");
    scanf("\n%d\n%d\n%d\n%d\n%d",&one,&two,&three,&four,&five);
    product=one*two*three*four*five;
    printf("\nThe Product Of One,Two,Three,Four,Five is :%d",product);
    return 0;
}