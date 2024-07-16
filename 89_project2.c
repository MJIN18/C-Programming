#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    char player,comp;
    printf("Welcome to Rock, Paper, Scissors Game!\n\n");
    printf("Rules: Enter 'r' for rock, 'p' for paper, 's' for scissors\n\n");
    
    //Computer Input
    srand(time(0));
    int num = rand()%3 + 1;
	if(num==1){
		comp = 'r';
	}
	else if(num==2){
		comp = 'p';
	}
	else{
		comp = 's';
	}
	
    //Player Input
    printf("Your Turn: ");
    scanf("%c",&player);

    //Input
    printf("\nYou have choosen %c and Computer have choosen %c\n\n",player,comp);

    //Cases
    if(player=='p' && comp=='r'){
        printf("Congratulations! You won the game");
    }
    else if(player=='r' && comp=='p'){
        printf("Sorry! You lost the game");
    }
    else if(player=='s' && comp=='p'){
       printf("Congratulations! You won the game");
    }
    else if(player=='p' && comp=='s'){
        printf("Sorry! You lost the game");
    }
    else if(player=='r' && comp=='s'){
        printf("Congratulations! You won the game");
    }
    else if(player=='s' && comp=='r'){
        printf("Sorry! You lost the game");
    }
    else{
        printf("Game is Draw!");
    }
    
    return 0;
}
