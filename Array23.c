
#include<stdio.h>


// 1 dimensional array


int main()
{
    int roll[4];
    {
      for (int i = 0; i < 4; i++)       
      {
        printf("The roll number of %d have scored\n",i);
        scanf("%d",&roll[i]) ;
      }
      for (int i = 0; i < 4; i++)
      {
          printf("the roll number %d have scored %d marks in exam\n",i, roll[i]);
      }
      
    }
    return 0;
}

//  secound form of above function


int main()
{
    int roll[4]= {480, 450, 380, 350};

      for (int i = 0; i < 4; i++)
      {
          printf("the roll number %d have scored %d marks in exam\n",i, roll[i]);
      }

  return 0;
}


// 2 dimensional array

int main()
{
  int fun[2][4]={{2,3,4,5},{8,7,6,1}};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d",fun[i][j]);
    }
      printf("\n");
    
  }
  
  

  return 0;

}

// third example


#include<stdio.h>

int main()
{
   int table[2][4]={{0,1,2,3}, {10,11,12,13}, {20,21,22,23}};


   for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j < 4; j++)
       {
           printf("%d\t", table[i][j]);

       }
       printf("\n");
   }
   
    
    return 0;
}


