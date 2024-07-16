#include<stdio.h>

typedef struct date{
    int date;
    int month;
    int year;
}date; 

char cmp(date d1,date d2){
    if(d1.year>d2.year){
        printf("Date1 is greater than Date2");
    }
    else if(d1.year<d2.year){
        printf("Date2 is greater than Date1");
    }
    else{
        if(d1.month>d2.month){
        printf("Date1 is greater than Date2");
    }
    else if(d1.month<d2.month){
        printf("Date2 is greater than Date1");
    }
    else{
        if(d1.date>d2.date){
        printf("Date1 is greater than Date2");
    }
    else if(d1.date<d2.date){
        printf("Date2 is greater than Date1");
    }
    else{
        printf("Both dates are same");
    }
    }
    }
}

void display(date d,int i){
    printf("Date%d in DD/MM/YY format is: %d/%d/%d\n",i,d.date,d.month,d.year);
}

int main(){
    date d1,d2;
    printf("Enter the date of d1: ");
    scanf("%d",&d1.date);
    printf("Enter the month of d1: ");
    scanf("%d",&d1.month);
    printf("Enter the year d1: ");
    scanf("%d",&d1.year);
    printf("Enter the date of d2: ");
    scanf("%d",&d2.date);
    printf("Enter the month of d2: ");
    scanf("%d",&d2.month);
    printf("Enter the year d2: ");
    scanf("%d",&d2.year);
    display(d1,1);
    display(d2,2);
    cmp(d1,d2);
    return 0;
}
