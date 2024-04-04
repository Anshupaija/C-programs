#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter Any Two Numbers:");
    scanf("%d\t%d",&num1,&num2);
    printf("\nThe Numbers Are %d and %d\n",num1,num2);
    if (num1%2==0 && num2%2==0)
    {
        printf("Both Are Even Numbers!!");
    }
    else if (num1%2!=0 && num2%2!=0)
    {
        printf("Both Are Odd Numbers!!");
    }
    else{
        printf("Entered Numbers are invalid");
    }
    return 0;
}