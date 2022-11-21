#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 26

void main(){
    char str[] = "The worst things to eat before you sleep";
    //printf("%d\n", 'A');
    //printf("%d\n", 'B' - 'A');

    int cnt[SIZE] = { 0 };
    int len;
    int i;

    len = strlen(str);

    for (i = 0; i < len; i++){
        if(islower(str[i])) str[i] = toupper(str[i]);
    }

    for (i = 0; i < len; i++){
        if ((str[i] >= 'A' && str[i] <= 'Z'))
        cnt[str[i] - 'A']++;
    }

    for (i = 0; i < SIZE; i++){
        if(cnt[i]) printf("%c: %d\n", 'A' + i, cnt[i]);
    }


}