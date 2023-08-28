#include <stdio.h>

int main(){

    FILE*fptr;
    fptr = fopen("sum.txt", "r");  //read mode
    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    //opening again to write//

     fptr = fopen("sum.txt", "w");  //write mode (will replace the old data of the file)
    fprintf(fptr , "%d" , a+b);
    fclose(fptr);
    
    
    
    
    
    
    
    




    return 0;
}