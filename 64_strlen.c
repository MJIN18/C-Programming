#include<stdio.h>

int len(char *str){
	char *ptr = str;
	int count=0;
	while(*ptr!='\0'){
		*ptr++;
		count++;
	}
	return count;
}

int main(){
    char str[10];
    printf("Enter the String to know its Length?\n");
    gets(str);
    int a = len(str);
    printf("The Length of String is %d \n",a);    
    return 0;
}
