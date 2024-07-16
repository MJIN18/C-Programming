#include<stdio.h>
int main(){
	int r,h;
	printf("Enter the value of radius:");
	scanf("%d",&r);
	// To Calculate Area of Circle
	printf("Area of Circle is %f cm^2\n", 3.14*r*r);
	// To Calculate Volume of Cylinder
	printf("Enter the height of Cylinder:");
	scanf("%d",&h);
	printf("Volume of Cylinder is %f cm^3\n", 3.14*r*r*h);
	return 0;
}
