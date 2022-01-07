#include <stdio.h>
#include <string.h>

void reduction(char *heading)
{
    int index = 0, n = 0;

    for (int i = 0; i < strlen(heading); i++)
    {
        if (heading[i] == '<')
        {
            n = 1;
            continue;
        }

        else if (heading[i] == '>')
        {
            n = 0;
            continue;
        }

        if (n == 0)
        {
            heading[index] = heading[i];
            index++;
        }
    }
    heading[index] = '\0';

    while (heading[0] == ' ')
    {
        for (int j = 0; j < strlen(heading); j++)
        {
            heading[j] = heading[j + 1];
        }
    }

    while (heading[strlen(heading)-1] == ' ')
    {
        heading[strlen(heading)-1] = '\0';
    }
    
}

int main()
{
    char heading[] = "<h1/>   Global bio-diversity   <h2/>";
    reduction(heading);
    printf("the heading is ~~%s~~", heading);

    return 0;
}