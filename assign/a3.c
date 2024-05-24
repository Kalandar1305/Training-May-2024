
/*
write a  C program that performs temperature conversions between Celsius to Fahrenheit.
*/

#include<stdio.h>

int main(){
float c,f; 
	
printf("Enter the temperature in celsius: ");
scanf("%f",&c);

f= (c*9/5) +32;

printf("\nTemperature in fahrenheit: %f\n",f);


return 0;
}
