#include <stdio.h>
int main() {
    int a = 48, b = 18;
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    while(a != b) {
        if(a > b) a = a - b;
        else b = b - a;
    }
    printf("%d\n", a);
    return 0;
}
