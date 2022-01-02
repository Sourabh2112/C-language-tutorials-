#include<stdio.h>
#include<string.h>

union employee
{
    char name[22];
    char grade;
    int id;

}e1, e2;

void detail(employee)
{
    printf("the id e1 employee is %d\n", e1.id);
    printf("the id e2 employee is %d\n", e2.id);
    printf("grade of employee e1 and e2 is %c, %c\n", e1.grade, e2.grade);
    printf("the name of employee e1 is %s\n", e1.name);
    printf("the name of employee e2 is %s\n", e2.name);

}


void main()
{
    e1.id = 5165;
    e2.id = 5171;
    e1.grade = 'A';
    e2.grade = 'B';
    strcpy(e1.name , "Sourabh kumar" );
    strcpy(e2.name, "Abhishek");
    
    detail();


}