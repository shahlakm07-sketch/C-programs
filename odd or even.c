#include <stdio.h>

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}

/*
output
Enter number: 8
Even

Enter number: 5
Odd
*/
