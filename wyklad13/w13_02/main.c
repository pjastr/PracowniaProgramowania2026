#include <stdio.h>

struct Przyklad {
    char x;
    int y;
};

int main() {
    printf("Rozmiar struktury: %Iu bajty\n", sizeof(struct Przyklad));
    struct Przyklad p1;
    printf("%p\n",&p1.x);
    printf("%p\n",&p1.y);
    return 0;
}
