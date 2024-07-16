#include<stdio.h>

void check(char *str,char a){
    char *ptr = str;
    int count = 0;
    while(*ptr!='\0'){
        if(*ptr==a){
            count ++;
        }
        ptr++;
    }
    if(count==0){
    	printf("No, it is not present in string!");
	}
	else{
		printf("Yes, it is present in string!");
	}
}

int main(){
    char str[100];
    char ch;
    printf("Enter the String: ");
    gets(str);
    printf("Enter the character to check whether it is present or not: ");
    scanf(" %c",&ch);
    check(str,ch);
    return 0;
}
