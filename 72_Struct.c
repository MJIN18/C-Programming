#include<stdio.h>
#include<string.h>

struct employee{
    char name[100];
    int id;
    float salary;
};

int main(){
    // struct employee e1;
    // strcpy(e1.name,"Mehul");
    // e1.id = 101;
    // e1.salary = 10,000;
    // struct employee e2;
    // strcpy(e2.name,"Utkarsh");
    // e2.id = 102;
    // e2.salary = 20,000;
    // struct employee e3;
    // strcpy(e3.name,"Nirmal");
    // e3.id = 103;
    // e3.salary = 30,000;
    // struct employee e4;
    // strcpy(e4.name,"Anita");
    // e4.id = 103;
    // e4.salary = 40,000;

    struct employee e1,e2,e3;
    printf("Enter the id of e1: ");
    scanf("%d",&e1.id);
    printf("Enter the name of e1: ");
    scanf("%s",e1.name);
    printf("Enter the salary of e1: ");
    scanf("%f",&e1.salary);
    printf("Enter the id of e2: ");
    scanf("%d",&e2.id);
    printf("Enter the name of e2: ");
    scanf("%s",e2.name);
    printf("Enter the salary of e2: ");
    scanf("%f",&e2.salary);
    printf("Enter the id of e3: ");
    scanf("%d",&e3.id);
    printf("Enter the name of e3: ");
    scanf("%s",e3.name);
    printf("Enter the salary of e3: ");
    scanf("%f",&e3.salary);
    return 0;
}