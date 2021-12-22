 /* what is function ?(it is little bit difficult)
 
//1. with argument and with returns value -

#include<stdio.h>

 int sum(float a, float b)
{
     return a+b;

 }


 int main()
  {
    float a, b, c;
      a= 4;
      b= 4;
    c= sum(a,b);
     printf("the sum is %f",c);
    return 0;
}

//2.  with argument and no returns value-
// how to print star -

#include<stdio.h>

void printstar(int n)
{
    for (int i = 1; i < n; i++)
    {
        printf("%c", '*');
    }
    
}

int main()
{
  printstar(7);

   return 0;
}



// 3. without argument and with returns value-

#include<stdio.h>

int takenumber()
{
    int i;
    printf("enter a number\n");
    scanf("%d", &i);
    return i;

}


int main()
{
    int c;
    c = takenumber();
    printf("the number is %d", c);
    return 0;
}

*/

// 4. without argument and without return -

/*
#include<stdio.h>

void funonharry()
{
    printf("function is not an easy. it's hard to understandand apply also but thanks to harry which help us to understand me eassily");
}

int main()
{

        funonharry();
    return 0;
}

// another example of above function

#include<stdio.h>
// function declare

void add();      

// function call

int main()
{
   add();

    return 0;
}
// function define

void add()
{
    int a, b, sum;
    printf("the value of a is \n");
    scanf("%d", &a);
    printf("the value of b is \n");
    scanf("%d", &b);
    sum = a+b;
    printf("the ans is %d", sum);

}

/*
  function declare aur function define ma(iskai undar use honai wala sentence ko 'parameters' boltai ha )
  aur function call ka undar use honai wala  sentence ko "argument" boltai ha.
  void = nothing.
  int, char,.... = data type.
  
*/

// example 1

/*#include<stdio.h>

char symbol();

void main()
{
    char s;
    s = symbol();
    printf("the symbol is %d", s);
}

char symbol()
{
   
   int a= 4, b=4, sum;
   sum = a+b;
   return sum;
}
*/

// example 2

/*
#include<stdio.h>

int add(int , float);

void main()
{
    int a,c, b;
    printf("enter number a\n");
    scanf("%d", &a);
    printf("enter number b\n");
    scanf("%d", &b);
    c = add(a,b);
    printf("the answer is %d ", c);

}

int add(int x, float y)
{
    return  x+y;

}
*/