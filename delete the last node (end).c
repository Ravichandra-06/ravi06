#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
}
void deleteEnd(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("List is empty.\n");
        return;
    }

    if ((*head_ref)->next == NULL) {
        free(*head_ref);
        *head_ref = NULL;
        return;
    }

    struct Node* second_last = *head_ref;
    while (second_last->next->next != NULL)
        second_last = second_last->next;

    free(second_last->next);
    second_last->next = NULL;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);

    printf("Original list:\n");
    printList(head);

    deleteEnd(&head);
    printf("After deleting last node:\n");
    printList(head);

    deleteEnd(&head);
    printf("After deleting another node:\n");
    printList(head);

    deleteEnd(&head);
    printf("After deleting last remaining node:\n");
    printList(head);

    return 0;
}
