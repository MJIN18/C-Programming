#include<stdio.h>

int main(){
    int i;
    int *j = &i;
    int **k = &j;
    printf("The Value of Pointer j is: %u\n",j);
    printf("The Value of Pointer k is: %u\n",k);
    
    // Addition
    // j++;
    // printf("The Value of Pointer is: %u\n",j);
	//printf("The Value of Pointer is: %u\n",j+3);
	
    // Subtraction
    // j--;
    // printf("The Value of Pointer is: %u\n",j);
	
	// Comparison
	//    if (j!=k)
	//    {
	//       printf("They are not equal!");
	//    }
	
	//Subtraction of one pointer from another
	int *ptr1,*ptr2,num1,num2,result;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	printf("Enter two numbers: ");
    scanf("%d %d", ptr1, ptr2);

	
	result = ptr1 - ptr2;
	printf("The Differnce between one pointer from another: %d\n",result);	
   
    return 0;
}
