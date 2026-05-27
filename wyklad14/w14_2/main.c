#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

void printListWithHead(struct element * list){
    struct element * ptr = list->next;
    while(ptr != NULL){
        printf("%d\n", ptr->i);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->next = malloc(sizeof(struct element));
    list->next->i = -3;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->i = 7;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->i = -11;
    list->next->next->next->next = NULL;
    printListWithHead(list);
    return 0;
}
