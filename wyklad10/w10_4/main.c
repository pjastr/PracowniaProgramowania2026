#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char txt[]){
    for(int i=0; txt[i] !=0; i++){
        if ('A' <= txt[i] && txt[i] <= 'Z'){
            txt[i] += ('a'-'A');
        }
    }
}

int isUpperNew(char c){
    char uppers[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0; uppers[i] !=0;i++){
        if (uppers[i] == c){
            return 1;
        }
    }
    return 0;
}

void toLowerNew2(char txt[]){
    for(int i=0; txt[i] !=0; i++){
        if (isUpperNew(txt[i])){
            txt[i] += ('a'-'A');
        }
    }
}

int main()
{
    char txt[] = "InfoRMAtyka23";
    printf("%s\n", txt);
    toLowerNew2(txt);
    printf("%s\n", txt);
    return 0;
}
