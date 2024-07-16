#include<stdio.h>
void change(int a);

int main(){
    int a = 344;
    printf("The value of a before change is %d\n", a);
    change(a);
    printf("The value of a after change is %d\n", a);
    return 0;
}

void change(int a){
    a = 77;
}
