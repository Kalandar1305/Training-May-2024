/* Delete adjacent duplicate character from a word */

#include<stdio.h>
#include<string.h>

int main(){

	char str[100];

	printf("Enter a string: ");
	fgets(str,100,stdin);
	int cur=0;
	for(int i=1;i<strlen(str);i++){
	
		
		if(str[i]==cur){
			str[i]='&';
		}
		else if(str[i]==str[i-1]){
			cur=str[i];
			str[i-1]='&';
			str[i]='&';	
		}
		else{
			cur=0;
		}
		
	}
	printf("\n");
	for(int i=0;i<strlen(str);i++){
		if(str[i]!='&')
			printf("%c",str[i]);
	}
	
	printf("\n");
	return 0;
}
