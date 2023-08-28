# include <stdio.h>

int main(){

char input;
printf("enter 1 character "); 
scanf("%c", &input);
 



 if (input>='A' && input<='Z'){
    
        printf(" the character is uppercase ");
 }
    else if ( input>='a' && input<='z') {
    printf("the character is of lowercase");
    }

 
    

return 0;
}