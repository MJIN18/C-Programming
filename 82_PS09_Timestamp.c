#include<stdio.h>

typedef struct date{
    int date;
    int month;
    int year;
}date; 

typedef struct time{
    int hours;
    int minutes;
    int seconds;
}time; 

char cmp(date d1,date d2,time t1,time t2){
    if(d1.year>d2.year){
        printf("Timestamp1 is greater than Timestamp2");
    }
    else if(d1.year<d2.year){
        printf("Timestamp2 is greater than Timestamp1");
    }
    else{
        if(d1.month>d2.month){
        printf("Timestamp1 is greater than Timestamp2");
    }
    else if(d1.month<d2.month){
        printf("Timestamp2 is greater than Timestamp1");
    }
    else{
        if(d1.date>d2.date){
        printf("Timestamp1 is greater than Timestamp2");
    }
    else if(d1.date<d2.date){
        printf("Timestamp2 is greater than Timestamp1");
    }
    else{
        if(t1.hours>t2.hours){
        printf("Timestamp1 is greater than Timestamp2");
    }
    else if(t1.hours<t2.hours){
        printf("Timestamp2 is greater than Timestamp1");
    }
    else{
        if(t1.minutes>t2.minutes){
        printf("Timestamp1 is greater than Timestamp2");
    }
    else if(t1.minutes<t2.minutes){
        printf("Timestamp2 is greater than Timestamp1");
    }
    else{
        if(t1.seconds>t2.seconds){
        printf("Timestamp1 is greater than Timestamp2");
    }
    else if(t1.seconds<t2.seconds){
        printf("Timestamp2 is greater than Timestamp1");
    }
    else{
        printf("Both Timestamps t1 and t2 are same");
    }
    }
    }
    }
    }
    }
}

void display(date d,time t,int i){
    printf("Timestamp%d in DD/MM/YY-HH:MM:SS format is: %d/%d/%d-%d:%d:%d\n",i,d.date,d.month,d.year,t.hours,t.minutes,t.seconds);
}

int main(){
    date d1,d2;
    time t1,t2;
    printf("Enter the date of ts1: ");
    scanf("%d",&d1.date);
    printf("Enter the month of ts1: ");
    scanf("%d",&d1.month);
    printf("Enter the year ts1: ");
    scanf("%d",&d1.year);
     printf("Enter the hours of ts1: ");
    scanf("%d",&t1.hours);
    printf("Enter the minutes of ts1: ");
    scanf("%d",&t1.minutes);
    printf("Enter the seconds ts1: ");
    scanf("%d",&t1.seconds);
    printf("Enter the date of ts2: ");
    scanf("%d",&d2.date);
    printf("Enter the month of ts2: ");
    scanf("%d",&d2.month);
    printf("Enter the year ts2: ");
    scanf("%d",&d2.year);
     printf("Enter the hours of ts2: ");
    scanf("%d",&t2.hours);
    printf("Enter the minutes of ts2: ");
    scanf("%d",&t2.minutes);
    printf("Enter the seconds ts2: ");
    scanf("%d",&t2.seconds);
    display(d1,t1,1);
    display(d2,t2,2);
    cmp(d1,d2,t1,t2);
    return 0;
}