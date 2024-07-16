
#include<stdio.h>

int count(char *str,char a){
    char *ptr = str;
    int count = 0;
    while(*ptr!='\0'){
        if(*ptr==a){
            count ++;
        }
        ptr++;
    }
    return count;
}

int main(){
    char str[100] = "Hello! My name is Mehul";
    int i;
    i = count(str,'l');
    printf("Number of occurances are: %d",i);
    return 0;
}