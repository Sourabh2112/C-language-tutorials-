// it is also called as recursive function
// the syntax of finding factorial of any number is given bellow-


#include <stdio.h>
/*
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return(number*factorial(number-1));
    }
    return 0;
}

int main()
{   
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Factorial of number %d is %d", num, factorial(num));

    return 0;
}
*/

// secound example
/*
void display(int num)
{
    if (num<1)
    {
        printf("new series\n");
    }
    else
    {
        printf("%d\n",num);
        display(num-1);
        printf("%d\n",num);
        
    }
}

void main()
{
    display(4);
}
*/

// indirect recursive function

#include<stdio.h>


int sum1(int x)
{
    if (x<1)
    {   
        printf("go back\n");
        return 1;
    }
    else
    {
        return x + sum2(x/2);
    }

}

int sum2(int y)
{
  if (y<1)
    {
        return 0;
    }
    else
    {
        return y + sum1(y/2);
    }
}

void main()
{
   int c;
   c = sum1(10);
   printf("%d",c);
   
}



