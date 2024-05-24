/*
 * Write a program to perform simple arithmetic operation on two integers.
*/

#include<stdio.h>

int main(){
int a,b,sum,sub,mul,rem;
float div;
	
printf("Enter two integers: ");
scanf("%d%d",&a,&b);

sum=a+b;
sub=a-b;
mul=a*b;
div=(float)a/b;
rem=a%b;

printf("\n%d + %d = %d\n",a,b,sum);
printf("%d - %d = %d\n",a,b,sub);
printf("%d * %d = %d\n",a,b,mul);
printf("%d / %d = %f\n",a,b,div);
printf("%d / %d = %d\n",a,b,rem);

return 0;
}
