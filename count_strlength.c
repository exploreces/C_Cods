#include<stdio.h>
#include<string.h>
int count(char arr[]);

int main(){
    char fname[40];
    printf("enter first name  ");
    scanf("%s", &fname);                    // string format specifier -- %s

    char lname[40];
    printf("enter last name  ");
    scanf("%s", &lname);

printf(" the length of the string is %d:\n", count(fname));
printf("the length of the string is%d :", strlen(lname)); // using predefind function  strlen() .

    return 0;

}

int count(char arr[]){
int count=0;
      for(int i=0;arr[i]!='\0' ; i++){
      
        count++;
        
      }
return count;

}