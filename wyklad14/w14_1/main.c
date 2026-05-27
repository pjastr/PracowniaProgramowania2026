#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

void printListWithoutHead(struct element * list){
    struct element * ptr = list;
    while(ptr != NULL){
        printf("%d\n", ptr->i);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list = malloc(sizeof(struct element));
    list->i = -3;
    list->next = malloc(sizeof(struct element));
    list->next->i = 7;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->i = -11;
    list->next->next->next = NULL;
    printListWithoutHead(list);
    return 0;
}
