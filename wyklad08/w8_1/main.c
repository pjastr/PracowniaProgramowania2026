#include <stdio.h>
#include <stdlib.h>

int maxValue(int tab[], int n) {
    int max = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

int main() {
    int tab[] = {1, -2, 12, -4, 22};
    printf("maxValue: %d\n", maxValue(tab,5));
    return 0;
}
