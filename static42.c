// example of local and global variables
/*

#include<stdio.h>

int b = 44;

void fun1(int b1)
{

   printf("the value of b is %d\n", b);
   printf("the value of b is %d\n", b1);
}

int main()
{
    int b = 444;

    printf("the value of b is %d\n", b);
    fun1(b);

    return 0;
}

*/

// example of static variable

#include <stdio.h>

int func1(int b1)
{
    static int b = 0;
    b++;
    
    printf("the vale of b is %d\n", b);


    return b1 + b;
}

int main()
{
    int b = 4, val;

    // val = func1(b);
    // val = func1(b);

    printf("%d\n", func1(b));
    printf("%d\n", func1(b));
    
    return 0;
}