/*
  what is lood function? how it's work.
= loop is used to run multiple code by the use of single code.
loop funvtion are off three types
1. do while loop.
2. for loop.
3. while loop.
  it's working process is as follow-
  */

#include <stdio.h>

int main()
{
    int num, integer=0;
    
    printf("enter a number\n");
    scanf("%d", &num);


//    here is how we write loop statements


    do
    {
       printf("%d\n", integer);
       integer = integer + 1;


    } while (integer<num);
    

    return 0;
}
