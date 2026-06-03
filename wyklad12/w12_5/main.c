#include <stdio.h>
#include <stdlib.h>

int suma(int n, int m, int ** tab){
    int temp =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp+= tab[i][j];
        }
    }
    return temp;
}

int main()
{
    //int tab[2][3] = {{3,4,5},{-4,2,1}};
    int ** tab = malloc(2*sizeof(int *));
    tab[0] = malloc(sizeof(int)*3);
    tab[1] = malloc(sizeof(int)*3);
    tab[0][0] = 3; tab[0][1] = 4; tab[0][2] = 5;
    tab[1][0] = -4; tab[1][1] = 2; tab[1][2] = 1;
    printf("%d\n", suma(2,3,tab));
    return 0;
}
