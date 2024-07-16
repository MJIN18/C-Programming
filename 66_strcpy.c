#include<stdio.h>

char copy(char *str2,char *str1){
	int i = 0;
	while(str1[i]!='\0'){
		str2[i] = str1[i] ;
		i++;
	}
	str2[i] = '\0';
	return *str2;
}

int main(){
    char str1[10];
    char str2[10];
    printf("Enter your name: ");
    scanf("%s",str1);
    copy(str2,str1);
    printf("Hello! %s",str2);
    return 0;
}
