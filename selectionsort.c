#include<stdio.h>
void printArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    }
    
void selectionsort(int arr[],int n)
{
    int temp,minIndex;
    for(int i=0;i<n-1;i++){
        minIndex=i;
    
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
            temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
int main(){

  int arr[]={3,5,2,13,12};
    int n=5;
    printf("Before sorting\n");
    printArray(arr , n);
    printf("After sorting\n");
    selectionsort(arr , n);
    printArray(arr , n);
    return 0;
}