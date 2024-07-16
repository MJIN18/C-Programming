#include<stdio.h>

void decrypt(char *str){
     char *ptr = str;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main(){
    char str[100];
    printf("Enter the string to decrypt: \n");
    scanf("%s",str);
    decrypt(str);
    printf("Decrypted String: %s",str);
    return 0;
}
