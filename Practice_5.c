#include<stdio.h>
void reverse(int *arr, int n){
    int temp;
    for(int i=0; i<(n/2); i++){
        temp = arr[i];
        arr[i] = arr[n-i];
        arr[n-i] = temp;
    }
}

int main(){
    int arr[10];
    for (int a= 0; a <10; a++)
    {
       printf("Give an integer value\n");
       scanf("%d",&arr[a]);
    }
    
    reverse(arr,9);
    for(int i=0; i<10; i++){
         printf("The value of %d element is: %d\n", i+1, arr[i]);
    }
    return 0;
}