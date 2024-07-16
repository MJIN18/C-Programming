#include<stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int num = 7;
    ptr = (int*) calloc(10 , sizeof(int));
    printf("Multiplication Table of %d is: \n",num);
    
    for(int i=0;i<10;i++){
    	ptr[i] = (i+1)*num;
        printf("%d * %d = %d\n",num,i+1,ptr[i]);
    }
    
	printf("\n\n");
    
	ptr = realloc(ptr,15 * sizeof(int));
     
    for(int i=0;i<15;i++){
        ptr[i] = (i+1)*num;
        printf("%d * %d = %d\n",num,i+1,ptr[i]);
    }
    return 0;
}
