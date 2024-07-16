#include<stdio.h>

void encrypt(char *str){
    char *ptr = str;
    while(*ptr!='\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main(){
    char str[100];
    printf("Enter the string to encrypt: \n");
    scanf("%s",str);
    encrypt(str);
    printf("Encrypted String: %s",str);
    return 0;
}
