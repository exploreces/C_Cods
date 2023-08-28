#include <stdio.h>

int fibo(int n);
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);

    printf("%d" , fibo(n));

}

int fibo ( int n){
    if (n==0|| n==1){
        return n;
    }
    else {
        return fibo(n-1)+ fibo(n-2);
    }
}