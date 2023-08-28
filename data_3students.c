#include <stdio.h> 
#include <string.h>

struct student{
    int roll ;
    float cgpa;
    char name [100];

};

int main(){
    struct student s1;
    s1.roll =9214;
    printf("enter the cgpa u got");
    scanf("%f", &s1.cgpa);
   
    
    strcpy(s1.name,"Ayushi" );

    printf("the name is %s\n", s1.name);
    printf("the roll is %d\n", s1.roll);
    printf("the cgpa is %f\n", s1.cgpa);

     printf("");
      printf("");

//-------------student 2---------------------------------//
    struct student s2;
    s2.roll =9314;
    printf("enter the cgpa u got");
    scanf("%f", &s2.cgpa);
   
    
    strcpy(s2.name,"Srishti" );

    printf("the name is %s\n", s2.name);
    printf("the roll is %d\n", s2.roll);
    printf("the cgpa is %f\n", s2.cgpa);

    printf("");
     printf("");

//-------------student 3--------------------------------------//

    struct student s3;
    s3.roll =9214;
    printf("enter the cgpa u got");
    scanf("%f", &s3.cgpa);
   
    
    strcpy(s3.name,"Lovely" );

    printf("the name is %s\n", s3.name);
    printf("the roll is %d\n", s3.roll);
    printf("the cgpa is %f\n", s3.cgpa);




    return 0;

}
