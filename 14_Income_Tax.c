#include<stdio.h>

int main(){
	float a;
	printf("Enter Income Amount(in lakhs):\n");
	scanf("%f",&a);
	
	if(2.5>a){
		printf("\nYou don't have to pay Income Tax\n");
	}
	else if((a>2.5)&&(5>a)){
		printf("\nYou have to pay 5%% Income Tax\n");
		printf("\nYou have to pay: %f Lakhs\n",(a*5)/100);
	}
	else if((a>=5)&&(10>a)){
		printf("\nYou have to pay 20%% Income Tax\n");
		printf("\nYou have to pay: %f Lakhs\n",0.125+((a-2.5)*20)/100);
	}
	else if(a>=10){
		printf("\nYou have to pay 30%% Income Tax\n");
		printf("\nYou have to pay: %f Lakhs\n",12.5+(a*30)/100);
	}
//	else{
//	printf("\nEnter a Valid Income Amount\n");
//	}

return 0;
}

