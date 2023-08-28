#include<stdio.h>



struct vector{
    int x;
    int y;

};

void calc_sum(struct vector v1, struct vector v2, struct vector sum);

int main(){
   struct vector v1 = { 5 , 10};
    struct vector v2 = { 11 , 17};
   struct vector sum = {0};


   calc_sum(v1, v2, sum);
   

   return 0;
   }

void calc_sum(struct vector v1, struct vector v2, struct vector sum){
   sum.x =v1.x +v2.x;
   sum.y =v1.y +v2.y;
   

   printf("sum of x is %d\n" , sum.x);
   printf("sum of y is %d\n" , sum.y);
   
   }