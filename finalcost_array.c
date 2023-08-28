#include<stdio.h>

// error ..........wrong code somewhere.


int main(){ // input is given print the final price after adding gst that is 18% of price + price.

    float price[]={20,40,60}; // initializing

   // printf("enter 3rd price");
   // scanf("%f", price[2]);          // taking input from user 

float *ptr = &price[0];

for(int i=1;i<=3;i++){
  
    printf("%f\n", *ptr  );
    ptr++;
}

 float **pptr = &ptr;

for(int i=1;i<=3;i++){
  
    printf("%f\n", **pptr + (0.18* (**pptr))  );
    pptr++;
}



return 0;


 }
