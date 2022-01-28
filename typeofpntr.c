// void pointer
/*
#include<stdio.h>


int main()
{
    void *p;
    int a = 7;
    float b = 4.4;

    p =&a;
    printf("the value of a is %d\n",*((int *)p));

    p = &b;
    printf("the value of a is %f\n",*((float *)p));

    return 0;
}
*/

// null pointer

#include<stdio.h>


int main()
{
    int a = 4;
    int *p;
    p = NULL;

    printf("the value of a is % d\n", a);
    printf("the value is % d\n", p);

    p = &a;
    printf("the value is % d\n", *p);
    
    return 0;
}