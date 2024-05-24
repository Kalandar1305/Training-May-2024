

/*
BMI Calculator:
Write a program that calculates the Body Mass Index (BMI) based on user input for weight (in kg) and height (in meters). Use if statements to classify the BMI into categories:
Below 18.5: Underweight
18.5 to 24.9: Normal weight
25 to 29.9: Overweight
30 and above: Obesity
*/

#include<stdio.h>
#include<stdlib.h>
int main(){

int w,h;
float BMI;

printf("Enter the weight(kg) and height(m): ");
scanf("%d%d",&w,&h);

BMI=w/h;

if(BMI>=30){
printf("Obesity\n");
exit(0);
}

if(BMI>=25 && BMI<30){
printf("Overweight\n");
exit(0);
}

if(BMI>=18.5 && BMI<25){

	printf("Normal weight\n");
	exit(0);
}

if(BMI<18.5){
printf("Underweight\n");
exit(0);
}

return 0;
}
