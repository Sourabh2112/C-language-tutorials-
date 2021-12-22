#include<stdio.h>

void printstr(char str[])
{
    int i = 0;

    while (str[i]!='\0')
    {
        printf("%c",str[i] );
        i++;
    }
    printf("\n");
}

int main()
{
    char str[12];
    gets(str);
    printf("let's begin\n");
    printstr(str);
    printf("using printf = %s\n",str);
    printf("using puts function \n");
    puts(str);

    return 0;
}