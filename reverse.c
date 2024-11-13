#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the array");
    for(int i=n-1;i>=0;i--){
        scanf("%d",arr[i]);
        }
        printf("enter the reversed array");
        for(int i=n-1;i>=0;i--){
            printf("%d",arr[i]);
        }