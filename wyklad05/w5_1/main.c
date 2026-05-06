#include <stdio.h>
int main() {
    int num = -12345, digit;
    if(num < 0) num = -num;
    if(num == 0) {
        printf("0");
    } else {
        while(num) {
            digit = num % 10;
            printf("%d ", digit);
            num /= 10;
        }
    }
    return 0;
}
