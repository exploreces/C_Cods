
#include<stdio.h>       // incomplete code

int reverse(int arr[], int n); 

int main(){

  int arr[]={1,2,3,4,5,6};


 return 0;
}

int reverse(int arr[], int n){

    for( int i=0;i<n/2;i++)
    {
        int firstVal = arr[i];
        int secondVal = arr[n-1-i];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;


    }
}