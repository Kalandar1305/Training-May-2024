/* Capitalize first letter of each word in a sentence */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100];
	char *arr[100];
	int i=0;

	printf("Enter a string: ");
	scanf("%[^\n]s",str);
	
	

	
	char* token = strtok(str," ");

	while(token!=NULL){
		arr[i++]= token;
		token = strtok(NULL," ");
			
	}
	

	printf("%s",arr[1][0]);

	for(int j=0;j<i;j++){
		for(int k=0;k!='\0';k++){
			printf("%c\t",arr[k]);
			char c = toupper(arr[k][0]);
			printf("%c\t",c);
		}
	}

	return 0;	
}
