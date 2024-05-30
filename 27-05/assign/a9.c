/*
 *Write a program to sort an array of strings in lexicographic (dictionary) order.
 *
 * */

#include<stdio.h>
#include<string.h>

void sort(char str[][100],int n);
void swap(char *,char *);
int main(){
	
	int n;

	printf("Enter the number of words: ");
	scanf("%d",&n);


	char str[n][100];
	printf("\nEnter the string: ");

	for(int i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	sort(str,n);

	printf("\nAfter sorting: ");
	for(int i=0;i<n;i++){
	printf("%s\t",str[i]);
	}
	return 0;
}

void sort(char str[][100],int n){

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(str[j],str[j+1])>0){
				swap(str[j],str[j+1]);
			}
		}
	}
}

void swap(char *str1,char *str2){
	char temp[100];
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
}
