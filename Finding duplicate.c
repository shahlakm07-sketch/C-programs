#include <stdio.h>

int main() {
    int n, i, j, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(nums[i] == nums[j]) {
                found = 1;
                break;
            }
        }
    }

    if(found)
        printf("Duplicates found\n");
    else
        printf("All elements are distinct\n");

    return 0;
}


/*
Output 
Enter size: 5
Enter elements:
1 2 1 3 4
Duplicates found

Enter size: 5
Enter elements:4 
1 2 3 4 5
All elements are distinct
*/

