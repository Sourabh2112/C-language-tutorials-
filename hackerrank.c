#include <stdio.h>

// void update(int *a,int *b) 
// {
//    int x , y ;
//    x = *a;
//    y = *b;

//    *a = (x+y);
   
//    if (x>y)
//    {
//        *b = (x-y);
//    }
//    else
//    {
//        *b = (y-x);
//    }
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }

void check(int *ptr)
{
   int x;
   x = *ptr ;
   
   *ptr = x +2 ;
}

int main()
{
    int a = 4;
    int *i = &a;
    printf("a = %d\n",a);
    check(i);
    printf("a = %d\n",a);


    return 0;
}
