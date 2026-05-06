#include <stdio.h>

int main() {
    int n = 82, i = 0;
    while (i * i <= n) {
        i++;
    }
    printf("%d\n", i - 1);
    return 0;
}
