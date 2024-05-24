/*
To calculate Area and Circumference of a circle
*/

#include<stdio.h>
#define PI 3.14

int main(){
int r;
double a,c;
	
printf("Enter the radius of the circle: ");
scanf("%d",&r);

a= PI * r * r;
c= 2* PI * r;

printf("\nArea of the circle: %lf\n",a);
printf("Circumference of the circle = %lf\n",c);


return 0;
}
