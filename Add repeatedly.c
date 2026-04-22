#include <stdio.h>

int main() {
    int num, sum;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num >= 10) {
        sum = 0;
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    printf("Single digit: %d", num);

    return 0;
}


/*
Output
Enter number: 123
Single digit: 6

  Enter number: 198
Single digit: 9
*/
