#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void insertAfterEven(struct element * list){
    struct element * current = list->next;
    while(current != NULL){
        if (current->x %2 == 0){
            struct element * ptr = malloc(sizeof(struct element));
            ptr->x = 0;
            ptr->next = current->next;
            current->next = ptr;
            current = ptr;
        }
        current = current->next;
    }
}

void printList(struct element * list){
    struct element * current = list->next;
    while(current != NULL){
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}


int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->x = 1;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 12;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 8;
    list->next->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->next->x = 5;
    list->next->next->next->next->next = NULL;
    printList(list);
    insertAfterEven(list);
    printList(list);
    return 0;
}
