/*
 * Write a program that takes a score (0-100) as input from the user and uses if statements to determine the corresponding grade:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F
Print the grade.

*/

#include<stdio.h>
#include<stdlib.h>
int main(){

int m;


printf("Enter the marks: ");
scanf("%d",&m);

if(m>100 || m<0){
printf("Invalid marks\n");
exit(0);
}

if(m>=90 && m<=100){
printf("Grade A\n");
exit(0);
}

if(m>=80 && m<=89){

	printf("Grade B\n");
	exit(0);
}

if(m>=70 && m<=79){
printf("Grade C\n");
exit(0);
}

if(m>=60 && m<=69){
printf("Grade D\n");
exit(0);
}

if(m<60){
printf("Grade F\n");
exit(0);
}

return 0;
}
