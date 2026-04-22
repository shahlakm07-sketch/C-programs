#include <stdio.h>

int main() {
    int x, original, reversed = 0, remainder;
    printf("Enter number: ");
    scanf("%d", &x);
    original = x;
    while (x != 0) {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }
    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

/*
Output 

Enter number: 121
Palindrome

Enter number: 123
Not Palindrome
*/
