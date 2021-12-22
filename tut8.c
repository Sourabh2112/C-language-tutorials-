# include <stdio.h>
/*
int main()
{
    int a;
    a=4;

    printf("Table of 4 is :\n ");

    printf("4*1 = %f\n", a*1);
    printf("4*2 = %f\n", a*2);
    printf("4*3 = %f\n", a*3);
    printf("4*4 = %f\n", a*4);
    printf("4*5 = %f\n", a*5);
    printf("4*6 = %f\n", a*6);
    printf("4*7 = %f\n", a*7);
    printf("4*8 = %f\n", a*8);
    printf("4*9 = %f\n", a*9);
    printf("4*10 = %f\n",a*10);

    printf("TASK COMPLETED\n");

    return 0;
}
*/

// another method -

int main()
{
    int num;
    printf("Enter the number you want to write the multiplication of\n");
    scanf("%d", &num);
    
    printf("The multiplecation of table %d is\n", num);

    for (int i = 1; i < 11; i++)
    {
        printf("%d*%d = %d\n", num, i, num*i);
    }
    
    return 0;
}




