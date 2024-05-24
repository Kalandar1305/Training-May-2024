/*
 * Simple Calculator:
Write a program that takes two numbers and an operator (+, -, *, /) as input and uses if statements to perform the corresponding arithmetic operation. Print the result.

*/

#include<stdio.h>
#include<stdlib.h>

int main(){

char ch;
int a,b;
	

printf("Enter an operator ( +,-,*,/): ");
scanf("%c",&ch);

printf("Enter two numbers: ");
scanf("%d%d",&a,&b);

switch(ch){

case '+':
printf("%d + %d = %d\n",a,b,a+b);
break;

case '-':
printf("%d - %d = %d\n",a,b,a-b);
break;

case '*':
printf("%d * %d = %d\n",a,b,a*b);
break;

case '/':
printf("%d / %d = %lf\n",a,b,(double)a/b);
break;

default: 
printf("Invalid operator\n");
exit(0);
}

return 0;
}
