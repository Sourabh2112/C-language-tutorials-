/*
  how to use switch function and what it is?
  */

#include<stdio.h>


 int main()
 {                      
    int age, sex;

    printf("enter your age \n");
    scanf("%d", &age);

    printf("what is your sex\n");
    printf("if you are male press 1\n");
    printf("if you are female pres 2\n");
    scanf("%d", &sex);

    switch (age)
  {
    case 3:
        printf("your age is 3\n");
        break;
    case 13:
        printf("your age is 13\n");
        break;
    case 23:
        printf(" your age is 23\n");
        break;

    default:
        printf("your age is not 3, 13, 23\n ");
        printf("you are not allowed to enter in the club\n");
    }

     switch (sex)
        {       
        case 1:
            printf("you are male");
            break;
        case 2:
            printf("you are female");
            break;
        
        default:
            printf("you are transgender");
            break;
        }
     return 0;
 }
 