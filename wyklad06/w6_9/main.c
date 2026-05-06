#include <stdio.h>
#include <stdlib.h>

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int foo(int a){
    return a+5;
}

int main()
{
    printf("%d\n", calculate(abs, -34));
    printf("%d\n", calculate(foo, -34));
    return 0;
}
