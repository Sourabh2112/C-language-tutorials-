#include <stdio.h>

/*
    isS tutorial ma "if-else " ka use karna iskangai .
    "if" ka sath jo  statement likha hua hota ha wss stat. ko true or false ma 
    sa koi ex hota ha. agr stat. true ho toh "if" ka undar jo hota ha wsko prefer 
    karna hota ha aur agr false ho toh "else" ka undar ansr wala output ma ata ha.

    // see in example= use of (if, else, or else if)

*/

int main()
{
    int age;

    printf("enter your age \n");
    scanf("%d", &age);

    printf("your age is %d\n", age);

    if (age>=18)
    {
      printf("you can vote");
    }

    else if(age>=10)
    {
    printf("your age lies between 10 to 18, you cannot vote");
    }
    
    else
    {
        printf("children's are  not eligilble to vote");
    }
    return 0;
}



//quiz 1 distribution of prize 

/*

#include <stdio.h>


int main(int argc, char const *argv[])
{
   int exam;

   printf("which exam have you pass\n");
   printf("if you have pass in sciene exam press 1\n");    
   printf("if you have pass in math exam press 2\n");    
   printf("if you have pass in both press 3\n"); 
   scanf("%d", &exam);   

   if (exam==1)
   {
     printf("you have won 15 rupee");
   }

   else if (exam==2)
   {
     printf("you have won 15 rupee");
   }
   
   else if (exam==3)
   {
       printf("you have won 45 rupee");
   }
    
   

    return 0;
}
*/

/*
QUIZ NUMBER 2

#include<stdio.h>


 int main()
 {
    int code;
    
    printf("enter your code\n");
    scanf("%d", &code);

/* 
    your code id as follow ~
      1.sourabh kumar = 101
      2.vikash modi   = 102
      3.manish mandal = 103
      4.rahul kuamar  = 104
      5.krishna yadav = 105
*/
/*
if (code == 101)
   {
    printf("your name is sourabh\n");
    printf("And your rank is 1st\n");
    printf("you have scored 417 out of 500\n");
   }

else if (code== 102)
{
    printf("your name is vikash modi\n");
    printf("And your rank is 2nd\n");
    printf("you have scored 407 out of 500\n");
}

else if (code== 103)
{
    printf("your name is manish mandal\n");
    printf("And your rank is 3rd\n");
    printf("you have scored 402 out of 500\n");
}

else if (code== 104)
{
    printf("your name is rahul kuamr\n");
    printf("And your rank is 4th\n");
    printf("you have scored 355 out of 500\n");
}

else if (code== 105)
{
    printf("your name is krishna yadav\n");
    printf("And your rank is 5th\n");
    printf("you have scored 350 out of 500\n");
}

else
{
    printf("Better luck next time:)");
}

   

    
     return 0;
 }
 */