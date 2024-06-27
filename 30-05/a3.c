#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char words[1000][1000];
    printf("Enter the String\n");
    fgets(str,1000,stdin);
    int len =strlen(str);
    str[len-1]='\0';
    int ptr=0;    
    char *t = strtok(str,"|");
    while(t!=NULL){
        strcpy(words[ptr++], t);
        t = strtok(NULL,"|");
    }
    int n=ptr;
     for (int i = 0; i < n; i++) {
        for (int j = 0;j<n-i-1;j++) {
            int res = strcmp(words[j],words[j+1]);
            if(res > 0){
                char temp[1000]="";
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
		strcpy(words[j+1],temp);
            }
        }
        }
    printf("The sorted words are :\n");
    for(int i = 0;i<n-1;i++){
        printf("%s|",words[i]);
    }
    printf("%s",words[n-1]);
    printf("\n");
    return 0;
}
