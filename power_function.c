#include<stdio.h>
#include<math.h>

int main(){

    int n;
    printf("enter the number");
    scanf("%d", &n);

    int result = pow(n,2);
    printf("the required square is:%d", result);
}