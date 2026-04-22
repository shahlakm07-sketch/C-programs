#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *temp, *prev = NULL, *current, *next;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &temp->data);
        temp->next = head;
        head = temp;
    }

    current = head;
    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    printf("Reversed list: ");
    while(prev != NULL) {
        printf("%d ", prev->data);
        prev = prev->next;
    }

    return 0;
}

