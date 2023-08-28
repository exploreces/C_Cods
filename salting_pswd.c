#include<stdio.h>
#include <string.h>

void salting(char pswd[]);

int main(){

   char pswd[100];
   printf("enter the password u want");
   scanf("%s", pswd);


    salting(pswd);
  
    return 0;

}

void salting(char pswd[]){

      char salt[]="123";
      char newpass[200];

      strcpy(newpass,pswd);
      strcat(newpass, salt);
    puts(newpass);      
      
      }