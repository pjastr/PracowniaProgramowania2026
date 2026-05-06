#include <stdio.h>
#include <stdlib.h>

int ciag(int k){
    if (k==0 || k==1){
        return 1;
    }
    if (k%3 == 0)
        return ciag(k/3);
    if (k%3 ==1){
        return ciag(k-1)-1;
    }
    return ciag(k-1)+1;
}

int main()
{
    printf("%d\n", ciag(0));
    printf("%d\n", ciag(1));
    printf("%d\n", ciag(2));
    printf("%d\n", ciag(3));
    printf("%d\n", ciag(4));
    printf("%d\n", ciag(5));
    return 0;
}
