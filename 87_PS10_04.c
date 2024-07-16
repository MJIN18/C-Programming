#include<stdio.h>

typedef struct employee{
    char name[100];
    float salary;
}emp;

int main(){
    emp e1,e2;
    printf("Enter the name of emp1: ");
    scanf("%s",e1.name);
    printf("Enter the salary of emp1: ");
    scanf("%f",&e1.salary);
    printf("Enter the name of emp2: ");
    scanf("%s",e2.name);
    printf("Enter the salary of emp2: ");
    scanf("%f",&e2.salary);
    FILE *ptr;
    ptr = fopen("emp.txt","w");
    fprintf(ptr,"%s,%.2f\n",e1.name,e1.salary);
    fprintf(ptr,"%s,%.2f\n",e2.name,e2.salary);
    fclose(ptr);
    printf("Success!");
    return 0;
}