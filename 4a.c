#include <stdio.h>
int main()
{
    char g;
    printf("Enter a character: ");
    scanf("%c",&g);

    if( (g>='a' && g<='z') || (g>='A' && g<='Z'))
        printf("%c is an alphabet.",g);
    else
        printf("%c is not an alphabet.",g);

    return 0;
}
