#include <stdio.h>

int main()
{
    int n;
    
    
    printf("Enter your number: ");
    scanf("%d", &n);
    

    if(n> 0)
    {
        printf("Number is POSITIVE");
    }
    if(n < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(n == 0)
    {
        printf("Number is ZERO");
    }

    return 0;
}
