#include<stdio.h>

int main(){
    int n,b;
    int i=1;
    printf("Enter the value of n to print sum of n natural number: ");
    scanf("%d",&n);

//    for(i=1; i<=n ; i++){
//        b += i;
//    }
//    
//        printf("\nSum of all natural number is %d",b);
        
    do{
    	b += i;
    	i++;
	}while(i<=n);
	
        printf("\nSum of all natural number is %d",b);
        
    return 0;
}
