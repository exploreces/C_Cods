#include <stdio.h>

int main(){

     int a =5;
     int b =10;
     printf("  first value of a is%d \n",a);
      printf(" first value of  b is %d\n",b);
     int temp;

      temp = a;
      a=b;
      b=temp ;

      printf(" after swap a is%d \n",a);
      printf(" after swap b is %d",b);


 return 0;
}