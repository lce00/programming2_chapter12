#include<stdio.h>
#include<string.h>
#define SIZE 26

void main(){
    char language[] = "language";
    char search = 'g';
    char* result;
    int len;
    int i;
    len = strlen(language);

    result = strchr(language, search);
    
    while (result != NULL){
        int index = (int)(result - language);
        printf("Found at %d\n", index);

        result = strchr(result + 1, search);
    }
    
}