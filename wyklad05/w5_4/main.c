#include <stdio.h>
int main() {
    int a = 48, b = 18, temp;
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    while(b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("%d\n", a);
    return 0;
}
