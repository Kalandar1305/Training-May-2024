/*
 *Author: Kalandar
 *Area of the circle
 *DOC: 23-05-2024
 *
 * */

#include <stdio.h>
#define PI 3.14


int main(){

   float radius;
   float area;

    printf("Enter the radius: ");
    scanf("%f",&radius);

    area = PI * radius * radius;

    printf("Area of the cirlce: %f",area);
    printf("\n\n");
	return 0;
}	
