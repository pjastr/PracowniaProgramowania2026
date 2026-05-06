#include <stdio.h>

int rec(int x, int y) {
    if(y == 0) return x;
    return rec(y, x % y);
}

int main() {
    int a = 48, b = 18;
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    printf("%d\n", rec(a, b));
    return 0;
}
