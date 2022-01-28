#include<stdio.h>


int main()
{
   int pattern;
        int n;
   printf("choose the patter you want:-\n 1.tringular shape.\n 2.reverse tringular shape\n.");
   scanf("%d",&pattern);

   switch (pattern)
   {
   case (1):
        printf("Enter the numbers of lines of star you want \n");
        scanf("%d",&n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                printf("%c",'*');
            }
            printf("\n");
        }
        

       break;
   
   default: 
      printf("wait");
       break;
   }

    return 0;
}