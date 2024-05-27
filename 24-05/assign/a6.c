/*
 Given an array of positive integers. Your task is to find the leaders in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader.*
 * */	

#include<stdio.h>
#include<stdbool.h>

int main(){

int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    int i,j;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nLeaders in array is/are : ");
    for(i=n-1;i>=0;i--)
    {
        int count =0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
        if(count==n-i-1)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n\n");
    return 0;
}



		
