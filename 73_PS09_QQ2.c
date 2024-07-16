#include<stdio.h>
#include<string.h>

struct employee{
    char name[100];
    int id;
    float salary;
};

void show(struct employee e1){
    printf("The id of employee e1: %d\n",e1.id);
    printf("The name of employee e1: %s\n",e1.name);
    printf("The salary of employee e1: %f\n",e1.salary);
}

int main(){
    struct employee e1;
    printf("Enter the id of e1: ");
    scanf("%d",&e1.id);
    printf("Enter the name of e1: ");
    scanf("%s",e1.name);
    printf("Enter the salary of e1: ");
    scanf("%f",&e1.salary);
    show(e1);
    return 0;
}