#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "sourabh";
    char s2[] = "ranbir";
    char s3[12];
    // puts(strcat(s1, s2));
    printf("%s is a frnd of %s\n", s1,s2 );
    printf("the length of s1 is %d\n", strlen(s1));
    printf("the length of s2 is %d\n", strlen(s2));
    printf("the reverse of s1 and s2 is %s, %s\n", strrev(s1), strrev(s2));
    strcpy(s3, strcat(s1,s2));
    puts(s3);

    return 0;
} 