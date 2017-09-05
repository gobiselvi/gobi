#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int c= 0, i;
 
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            c++;    
    }
    printf("number of words in given string are: %d\n", c+ 1);
}
