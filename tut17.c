/*

// use of 'goto'statement - 

#include<stdio.h>


int main(int argc, char const *argv[])
{
    idea:
    printf("my name is sourabh");
    goto gender;

    printf("and my age is 20");
    gender:
    printf("i am a boy");
     
    
    return 0;
}

*/


// secound example -

#include<stdio.h>
 
int main()


{
    int num;

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);

        for (int j = 0; j < 10; j++)
    
          {
            printf("%d\n", j);
            printf("enter any number\n");
            scanf("%d", &num);  
            if (num == 0)
               {
                   goto end;
               }
               
          }
        
    
       
        
    }

   end:
    
    return 0;
}
