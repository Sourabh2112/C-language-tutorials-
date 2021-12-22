// for loop

# include<stdio.h>

int main()
{
   int i=0;
   for ( ;i<4; i++);
   {    
      printf("%d", i);
   }
        
    return 0;
}

// example 2


#include<stdio.h>

int main()
{
    for (int i = 1; i < 2; i++)
    {
        for (int j= 0; j< 1; j++)
        {

            for (int k = 0; k < 10; k++)
            {
                printf("%d%d%d\n",i,j,k);
            }
            
        }
        
    }
    
    return 0;
}
