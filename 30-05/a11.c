#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
 
int main() {
	char str[100];
 
	printf("Enter a sentence: ");
	fgets(str, 100, stdin);
 
	int len = strlen(str);
    
	str[0]= toupper(str[0]);

	for(int i=1;i<len;i++){
    		if(str[i-1] == ' ')
			str[i] = toupper(str[i]);
	}	
 
	printf("\n%s\n", str);
 
	return 0;
}
