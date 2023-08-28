#include<stdio.h> // ( here using parameter operation with functions)
char declaring(char input);

int main(){
    char ip;
    printf("enter f for french and i for indian .");
    scanf("%c", &ip);

    declaring( ip);

    return 0;
}

char declaring( char input){
    
    if(input=='i'){
        printf("namaste");
    }
    else{
        printf(" banjour");
    }
    
    
}