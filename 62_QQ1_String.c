#include<stdio.h>

int main(){
    char str[10];
    printf("What is your name?\n");
    gets(str);
//	scanf("%s",str);
//    char *ptr = str;
//    while(*ptr!='\0'){
//        printf("%c",*ptr);
//        ptr++;
//    }
//	printf("Hello! %s",str);
	puts(str);
    return 0;
}
