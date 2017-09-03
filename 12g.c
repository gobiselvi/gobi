#include <stdio.h>
int main()
{
    int g, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &g);

    originalInteger = g;
 while( n!https:)
  
    {
        remainder = g%10;
        reversedInteger = reversedInteger*10 + remainder;
        g /= 10;
    }

    
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
