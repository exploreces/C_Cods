#include<stdio.h>
#include <string.h>

 typedef struct five_peoples{
    int h;
    char block[20];
    char city[100];
    char state[104];

} ppl;

int main() {

    //-------------p1----------------------------//
    ppl p1;
    p1.h =12;
    strcpy (p1.block , "2BA");
    strcpy (p1.city , "balasore");
    strcpy (p1.state , "orrisa");
    
//-------------------p2----------------------//

     ppl p2;
    p2.h =12;
    strcpy (p2.block , "2BAC");
    strcpy (p2.city , "remuna");
    strcpy (p2.state , "orrisa");
    
    //----------p3------------------//

     ppl p3;
    p3.h =12;
    strcpy (p3.block , "2BACD");
    strcpy (p3.city , "bhilai");
    strcpy (p3.state , "MP");
    
    //--------p4------------------------------//

     ppl p4;
    p4.h =12;
    strcpy (p4.block , "2BACDE");
    strcpy (p4.city , "bihar");
    strcpy (p4.state , "bihar");
    

    //--------p5-----------------------//

     ppl p5;
    p5.h =12;
    strcpy (p5.block , "2BACDEF");
    strcpy (p5.city , "nagpur");
    strcpy (p5.state , "Delhi");
    
printf("I am person 1 , and here is my details\n");
printf("house nom is %d\n", p1.h);
printf(" block is %s\n", &p1.block);            // '&' nai hoga yaha..but char stmt sahi print kar raha hain kyuki address ek integer valuehain.
printf(" city is %s\n", &p1.city);
printf(" state is %s\n", &p1.state);
printf("\n");

printf("I am person 2 , and here is my details\n");
printf("house nom is %d\n", p2.h);
printf(" block is %s\n", &p2.block);
printf(" city is %s\n", &p2.city);
printf(" state is %s\n", &p2.state);
printf("\n");

printf("I am person 3 , and here is my details\n");
printf("house nom is %d\n", p3.h);
printf(" block is %s\n", &p3.block);
printf(" city is %s\n", &p3.city);
printf(" state is %s\n", &p3.state);
printf("\n");

printf("I am person 4 , and here is my details\n");
printf("house nom is %d\n", p4.h);
printf(" block is %s\n", &p4.block);
printf(" city is %s\n", &p4.city);
printf(" state is %s\n", &p4.state);
printf("\n");

printf("I am person 5 , and here is my details\n");
printf("house nom is %d\n", p5.h);
printf(" block is %s\n", p5.block);
printf(" city is %s\n", p5.city);
printf(" state is %s\n", p5.state);
printf("\n");




    return 0;
}