#include<stdio.h>
int main(){
    int fuel,distance,required;
    printf("\nEnter Amount Of fuel:");
    scanf("%d",&fuel);
    printf("\nEnter Distance:");
    scanf("%d",&distance);
    required=fuel*distance;
    printf("The Answer is:",required);
    if(required>50){
        printf("Enough!!!");
    }
    else{
        printf("Go on!!!!");
    }
    return 0;
}