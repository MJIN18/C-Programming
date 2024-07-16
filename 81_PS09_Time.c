#include<stdio.h>

typedef struct time{
    int hours;
    int minutes;
    int seconds;
}time; 

char cmp(time t1,time t2){
    if(t1.hours>t2.hours){
        printf("Time1 is greater than Time2");
    }
    else if(t1.hours<t2.hours){
        printf("Time2 is greater than Time1");
    }
    else{
        if(t1.minutes>t2.minutes){
        printf("Time1 is greater than Time2");
    }
    else if(t1.minutes<t2.minutes){
        printf("Time2 is greater than Time1");
    }
    else{
        if(t1.seconds>t2.seconds){
        printf("Time1 is greater than Time2");
    }
    else if(t1.seconds<t2.seconds){
        printf("Time2 is greater than Time1");
    }
    else{
        printf("Both Times t1 and t2 are same");
    }
    }
    }
}

void display(time t,int i){
    printf("Time%d in HH:MM:SS format is: %d:%d:%d\n",i,t.hours,t.minutes,t.seconds);
}

int main(){
    time t1,t2;
    printf("Enter the hours of t1: ");
    scanf("%d",&t1.hours);
    printf("Enter the minutes of t1: ");
    scanf("%d",&t1.minutes);
    printf("Enter the seconds t1: ");
    scanf("%d",&t1.seconds);
    printf("Enter the hours of t2: ");
    scanf("%d",&t2.hours);
    printf("Enter the minutes of t2: ");
    scanf("%d",&t2.minutes);
    printf("Enter the seconds t2: ");
    scanf("%d",&t2.seconds);
    display(t1,1);
    display(t2,2);
    cmp(t1,t2);
    return 0;
}