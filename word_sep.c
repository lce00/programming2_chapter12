#include<stdio.h>
#include<string.h>
#define LINE_SIZE 100

char seps[] = " ";
char *token;

int main(){
    char buffer[LINE_SIZE];
    FILE *fp = fopen("london.txt", "r");
   
    if(fp == NULL){
        printf("Failed to open file\n");
        return -1;
    }

    

    while(fgets(buffer, LINE_SIZE-1, fp) != NULL){
        
       token = strtok(buffer, seps);

       while(token != NULL){
        printf("%s\n", token);
        
        token = strtok(NULL, seps);
       }
    }

    fclose(fp);

    return 0;
}