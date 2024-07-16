#include<stdio.h>

char encrypt(char *str, int num){
    char *ptr = str;
    while(*ptr!='\0'){
    	*ptr = *ptr + num;
        ptr++;
    }
    *ptr = '\0';
    return *str;
}

char decrypt(char *str,int num){
    char *ptr = str;
    while(*ptr!='\0'){
    	*ptr = *ptr - num;
        ptr++;
    }
    *ptr = '\0';
    return *str;
}

int main(){
    char str[100];
    int num;
    printf("Enter the string to encrypt: \n");
    scanf("%s",str);
    printf("Enter the Shift Value: \n");
    scanf("%d",&num);
    encrypt(str,num);
    printf("Encrypted String: %s\n",str);
    decrypt(str,num);
	printf("Decrypted String: %s",str);
    return 0;
}
