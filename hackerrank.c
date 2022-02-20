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

// solution  pointer easy
/*
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
*/

// solution loop
/*
int main()
{
    int n;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of n\n");
        scanf("%d", &n);

        if ((1 <= n) && (n <= 9))
        {
            printf("number is between 1 yo 9\n");
        }

        else
        {
            if (n % 2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }

    return 0;
}
*/

// SUM OF DIGIT
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sum(int n)
{
    static int x = 0;
    int y;
    if (n != 0)
    {

        y = (n % 10);
        x += y;
        sum(n / 10);
    }

    else
    {
        printf("%d\n", x);
    }
}

int main()
{

    int n;
    printf("ENTer the number\n");
    scanf("%d", &n);
    // getchar();
    sum(n);

    return 0;
}
*/
