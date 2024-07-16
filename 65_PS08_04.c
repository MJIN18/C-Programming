#include<stdio.h>
#include<string.h>

void slice(char *str,int m, int n){
    // int count=0;
    for(int i=m;i<=n;i++){
        printf("%c",str[i]);
        // count++;
    }

}

int main(){
    char str[] = "Hello! My Name is Mehul";
    slice(str,0,6);
    return 0;
}
