#include<stdio.h>
#include<calc_func.h>

int main(){
	
	int num1,num2,result;
	char op;
	
	printf("Enter operator: ");
	scanf("%c",&op);
	printf("Enter 2 numbers: ");
	scanf("%d%d",&num1,&num2);

	switch(op){
		case '+':
			result = add(num1,num2);
			printf("\nSum= %d\n",result);
			break;
		
		case '-':
			result = sub(num1,num2);
			printf("\nSub = %d\n",result);
			break;
		case '*':
			result = mul(num1,num2);
			printf("\nMul = %d\n",result);
			break;

		case '/':
			result = div(num1,num2);
			printf("\ndiv= %d\n",result);
			break;
		default:
			printf("Invalid operator");
	 }
	return 0;
}
