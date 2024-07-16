#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // printf("%d to %d",0,RAND_MAX);
    int num,i,guess,numguess;
    srand(time(0));
    num = rand()%100 + 1;
//    printf("The number is %d\n",num);
    printf("Welcome to Number Guessing Game: \n");
    printf("................................ \n");
    
    for(i=1;guess!=num;i++){
    	printf("\nEnter the number from 1 to 100:\n");
    scanf("%d",&guess);
        if(num<guess){
            printf("Lower Number please!\n");
        }
        else if(num>guess){
            printf("Higher Number please!\n");
        }
        else{
            printf("You have Guessed it right!\n");
        }
        numguess = i;
        }
        printf("\nYou have guessed in %d attempts\n",numguess);
    return 0;
}
