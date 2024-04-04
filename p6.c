#include <stdio.h>

int main() {
    // Initial values
    int one,two,three,four,five,six;   
    printf("\nEnter value Of one :");
    scanf("\n%d",&one);
    printf("\nEnter value Of two :");
    scanf("\n%d",&two);
    printf("\nEnter value Of three :");
    scanf("\n%d",&three);
    printf("\nEnter value Of four :");
    scanf("\n%d",&four);
    printf("\nEnter value Of five :");
    scanf("\n%d",&five);
    printf("\nEnter value Of six :");
    scanf("\n%d",&six);

    // Update values
    two *= 2;
    five *= 2;
    six *= 2;
    three *= 3;
    four *= 3;

    // sum of all
    int sum = one + two + three + four + five + six;

    // Print the sum
    printf("Sum of the updated values: %d\n", sum);

    return 0;
}
