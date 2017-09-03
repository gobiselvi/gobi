#include <stdio.h>

int main()
{
    int n;
    
    
    printf("Enter any number: ");
    scanf("%d", &n);
    

    if(n > 0)
    {
        printf("Number is POSITIVE");
    }
    else if(n < 0)
    {
        printf("Number is NEGATIVE");
    }
    else
    {
        printf("Number is ZERO");
    }

    return 0;
}
