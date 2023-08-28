#include <stdio.h>

int main(){
    int n;
    printf("enter number");
    scanf("%d", &n);

   int start=1;

    for(int i =1; i<=n;i++){
        start=start*i;
        }

        printf("thefactorial is %d",start);
        return 0;
    }
