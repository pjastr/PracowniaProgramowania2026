#include <stdio.h>
#include <stdlib.h>

int length(const char * txt){
    int i=0;
    while(txt[i]){
        i++;
    }
    return i;
}

char * toLowerNew(const char * txt){
    int n = length(txt);
    char* txt2 = (char*)malloc(sizeof(char) * (n+1));
    for(int i=0;i<n;i++){
        txt2[i] =  txt[i];
        if ('A' <= txt2[i] && txt2[i] <= 'Z'){
            txt2[i] +=32;
        }
    }
    txt2[n] = 0;
    return txt2;
}

int main()
{
    char txt[] = "InfoRMAtyka23";
    printf("%s\n", txt);
    char * txt2 = toLowerNew(txt);
    printf("%s\n", txt2);
    return 0;
}
