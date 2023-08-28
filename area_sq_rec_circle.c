#include<stdio.h>
#include<math.h>
// method declaration

int rectangle(int l, int b);
 int square(int side);
float circle (float radius);

// main function

int main(){
    char input;
    printf("enter s for square \n r for rectangle  \n c for circle");
    scanf("%c", &input);

    if(input=='r'){     // rectangle
         int l;
    printf("enter length");
    scanf("%d",&l);

    int b;
    printf("enter breadth");
    scanf("%d",&b);

       printf(" the area is %d", rectangle( l, b));
    }

    if(input=='s'){     // square
         int side;
    printf("enter side");
    scanf("%d",&side);
        square( side);
    }

    if(input=='c'){         //circle
         float radius;
    printf("enter radius");
    scanf("%f",&radius);
        circle(  radius);
    }
   return 0; 
}


        // method definition

int rectangle(int l, int b){
   
    return l*b;
    
}

int square(int side){
   
    int area2= pow(side,2);
    printf(" the area is %d", area2);
}

float circle( float radius){
   
    float area3 = 3.14* pow(radius,2);
    printf(" the area is %f", area3);
}