/*  

pointer is used to store the address of other variables and pointer is also a variable.
1. "&" is use too store the address of variables.
2. "*" is used to store the value of variable.

*/

#include<stdio.h>

// pointer:-


int main()
{
    int a=4;
    int *ptr = &a;
    printf("the address of ptr is %p\n", &ptr);
    printf("the address of a is %p\n", &a);
    printf("the address of a is %p\n", ptr);
    printf("the value of a is %d\n",*ptr);
    printf("the value of a is %d\n",a);
    return 0;
}



// null pointer:-



int main()
{
    int a=4 ;
    int *p=&a;
    int *p2= NULL;

    printf("the adress of p is %p\n",&p);
    printf("the adress of a is %p\n",&a);
    printf("the adress of a is %p\n",p);
    printf("the adress of p2 is %p\n",&p2);
    printf("the adress of p2 is %p\n",p2);
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",*p);
    
    return 0;
}


