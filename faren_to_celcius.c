#include<stdio.h>

float celtoF(float c);
int main(){

float celcius;
printf("enter celcius to convert in F");
scanf("%f", &celcius);

printf(" the farenheit is %f", celtoF(celcius));

return 0;
}
float celtoF(float c){
    return (c*0.18)+32;
}