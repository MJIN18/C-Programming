#include<stdio.h>

int main(){
    int m;
    printf("Enter Your Marks:");
    scanf("%d",&m);

    if((100>=m) && (m>=90)){
        printf("Your grade is A");
    }
    else if((90>m) && (m>=80)){
        printf("Your grade is B");
    }
    else if((80>m) && (m>=70)){
        printf("Your grade is C");
    }
    else if((70>m) && (m>=60)){
        printf("Your grade is D");
    }
    else if(60>m){
        printf("Sorry, You have failed in this examination");
    }
    
    return 0;
}