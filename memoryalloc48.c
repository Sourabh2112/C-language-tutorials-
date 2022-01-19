#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    char *emailid;
    int n, i = 0;

    while (i < 2)
    {
        gets(name);
        printf("enter the name of student\n ");
        puts(name);
        printf("\n");

        printf("Enter the length of email-id\n");
        scanf("%d", &n);
        
        emailid = (char *)malloc((n + 1) * sizeof(char));
        

        printf("Enter the emai-id :\n");
        scanf("%s", emailid);

        printf("the email-id is %s\n", emailid);

    free(emailid);

        i = i + 1;
    }

    return 0;
}