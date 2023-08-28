# include <stdio.h>

int main(){

float marks;
printf("enter marks out of 100 "); 
scanf("%f", &marks);
 

if(marks<0|| marks>100){
    printf(" invalid input of marks enter from 0 to 100");
}
else if (marks>=0 || marks<=100){
    if(marks>30){
        printf(" student passed");
    }
    else if ( marks<=30){
    printf("student failed");
    }
}
 
    

return 0;
}