#include <stdio.h>

int main() {
    char s[100];
    int i;

    printf("Enter string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }

    printf("Lowercase string: %s", s);

    return 0;
}


/*
output
Enter string: STRING
Lowercase string: string
*/
