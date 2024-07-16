#include<stdio.h>
#include<string.h>

typedef struct bank_account{
    char name[100];
    int id;
    float balance;
}bank;

int main(){

    bank c1;
    printf("Enter the customer id: ");
    scanf("%d",&c1.id);
    printf("Enter the customer name: ");
    scanf("%s",c1.name);
    printf("Enter the bank balance: ");
    scanf("%f",&c1.balance);
    printf("Customer id: %d\n",c1.id);
    printf("Customer name: %s\n",c1.name);
    printf("Bank balance: %f\n",c1.balance);
    return 0;
}