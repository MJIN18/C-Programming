#include<stdio.h>

int main(){
    char c;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("text.txt","r");
    ptr2 = fopen("hello_1.txt","w");
    c = fgetc(ptr);
    while(c!=EOF){
        fputc(c,ptr2);
        c = fgetc(ptr);
    }
    fprintf(ptr2,"\n\n");
    fclose(ptr);
    ptr = fopen("text.txt","r");
    c = fgetc(ptr);
    while(c!=EOF){
        fputc(c,ptr2);
        c = fgetc(ptr);
    }
    fclose(ptr2);
    printf("Success!");
    return 0;
}
