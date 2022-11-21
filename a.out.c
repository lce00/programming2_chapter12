#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 26

void main(){
    char* prefix = "student";
    char suffix[100];
    char fname[100];
 
    strcpy(fname, prefix);
    //printf("%s\n", fname);

    strcat(fname, ".");

    printf("File extension: ");
    scanf("%s", suffix);

    strcat(fname, suffix);

    printf("File name: %s\n", fname);
}