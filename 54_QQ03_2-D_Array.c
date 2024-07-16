#include<stdio.h>

void display(int arr,int a,int b){
    		printf("The marks of student %d in subject %d is %d\n",a,b,arr);
}
	

int main(){
    int n_student=3;
    int n_marks=3;
    int i,j;
    int arr[n_student][n_marks];
    for(int i=0;i<n_student;i++){
        for(int j=0;j<n_marks;j++){
            printf("Enter the marks of student %d in subject %d: \n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n_student;i++){
        	for(int j=0;j<n_marks;j++){
    		display(arr[i][j],i+1,j+1);
    		}
		}
    return 0;
}
