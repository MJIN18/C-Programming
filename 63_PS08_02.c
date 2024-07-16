#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[100];
    char *ptr = str2;
    int i=0;
    char c;
    printf("What is your name?\n");
	scanf("%s",str1);
    printf("Hello! %s\n",str1);

    printf("What is your name?(Enter Character by Character)\n");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i] = c;
        i++;
    }
    str2[i-1] = '\0';

    printf("Hello! %s\n",str2);
    printf("strcmp: %d (0 means true and 1 means false)",strcmp(str1,str2));
    return 0;
}
