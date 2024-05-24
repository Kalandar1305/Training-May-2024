

/*
Write a program to convert Binary to decimal
*/

#include<stdio.h>
#include<string.h>

int main(){
char bin[50];
int sum=0,base=1,i;
int j;
printf("Enter the number in binary: ");
scanf("%s",bin);

for(i=strlen(bin)-1;i>=0;i--){
	
	j=bin[i]-'0';
	sum=sum+(j* base);
	base*=2;
}

printf("\n%s in decimal format : %d \n",bin,sum);


return 0;
}
