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
//     // int *pa = &a, *pb = &b;

//     scanf("%d %d", &a, &b);
//     update(&a, &b);
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

// solution (and(&), or(|))
/*
void calculate_the_maximum(int n, int k)
{
    int c = 0, d = 0, e = 0;
    for (int a = 1; a < n; a++)
    {
        for (int b = a+1; b <= n; b++)
        {
          if ((a&b)<k && (a&b)>c) {c = a&b;}
          if ((a|b)<k && (a|b)>d) {d = a|b;}
          if ((a^b)<k && (a^b)>e) {e = a^b;}
        }
    }
    printf("%d\n%d\n%d\n",c,d,e);

}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
*/

// solution on loop

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int row = n - 1; row > -n; row--)
//     {
//         for (int col = 1 - n; col < n; col++)
//         {
//             int N = (abs(row) > abs(col)) ? abs(row) : abs(col);
//             printf("%d ", N + 1);
//         }
//         puts("");
//     }
//     return 0;
// }

// factorial

// #include <stdio.h>

// int main()
// {
//     int fact = 1;
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         if (i == 0)
//         {
//            continue;
//         }
//         else
//         {
//            fact = fact*i;
//         }
//     }
//     printf("%d", fact);
//     return 0;
// }

// Solution

