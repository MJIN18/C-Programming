#include<stdio.h>

int main(){
    int m;
    printf("Choose a number to see corresponding day to it (1-7):");
    scanf("%d",&m);

    switch(m){
    	case 1:
    		printf("\nToday's day is Sunday\n");
    		break;
    	case 2:
    		printf("\nToday's day is Monday\n");
    		break;
    	case 3:
    		printf("\nToday's day is Tuesday\n");
    		break;
    	case 4:
    		printf("\nToday's day is Wednesday\n");
    		break;
    	case 5:
    		printf("\nToday's day is Thursday\n");
    		break;
    	case 6:
    		printf("\nToday's day is Friday\n");
    		break;
    	case 7:
    		printf("\nToday's day is Saturday\n");
    		break;

    }
    return 0;
}
