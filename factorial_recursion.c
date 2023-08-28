#include<stdio.h>

int  factorial(int n);

 int main(){
    int n;
    printf("enter number n");
    scanf("%d", &n);
     int result = factorial(n);
    printf("the factorial is %d", result);

return 0;
 }

 int factorial(int n){

    if(n==0){ // base case
        return 1;
    }
    else{
        return n * factorial(n-1);      //recursion
    }
 }