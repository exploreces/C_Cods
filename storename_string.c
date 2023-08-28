#include<stdio.h>
void store_print(char arr[]);

int main(){
    char fname[40];
    printf("enter first name  ");
    scanf("%s", &fname);                    // string format specifier -- %s

    char lname[40];
    printf("enter last name  ");
    scanf("%s", &lname);
printf("your full name is \n");
store_print(fname);
store_print(lname);


    return 0;

}

void store_print(char arr[]){

      for(int i=0;arr[i]!='\0' ; i++){
        printf("%c",arr[i]);
      }
printf("\t");

}