#include<stdio.h>
/* 
  what is specifier?
  example = %d, %c, %f, etc..
  */

 int main()
 {  
    int a;
    float b;

    printf("enter number a\n");
    scanf("%d",&a);

    printf("enter number b\n");
    scanf("%f",&b);

    printf("number a = %d \t\t\t\t\t  number b = %f", a,b);     
    
    
    return 0;
 } 