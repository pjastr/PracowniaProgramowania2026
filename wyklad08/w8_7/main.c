#include <stdio.h>
#include <stdlib.h>

int main()
{
    char txt1[] = "Olsztyn";
    const char* txt2 = "Olsztyn";
    char* txt3 = (char*)malloc(sizeof(char) * 8);
    *txt3 = 'O';
    *(txt3+1) = 'l';
    *(txt3+2) = 's';
    *(txt3+3) = 'z';
    *(txt3+4) = 't';
    *(txt3+5) = 'y';
    *(txt3+6) = 'n';
    *(txt3+7) = '\0';

    printf("%s\n", txt1);
    printf("%s\n", txt2);
    printf("%s\n", txt3);
    txt1[1] = 'W';
    //txt2[1] = 'W';
    txt3[1] = 'W';
    printf("%s\n", txt1);
    printf("%s\n", txt2);
    printf("%s\n", txt3);
    free(txt3);
    return 0;
}
