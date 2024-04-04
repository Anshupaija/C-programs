#include<stdio.h>
int main(){
    int australia,england;
    printf("\nEnter The value of Australia and England:");
    scanf("\n%d\n%d",&australia,&england);
    if(australia>england){
        printf("Australia!!");
    }
    else if(australia==england){
        printf("Tie Hogaiii!!");
    }
    else{
        printf("England");
    }
    return 0;
}