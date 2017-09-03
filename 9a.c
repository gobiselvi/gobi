#include <stdio.h>
int main()
{
    float n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%f",&n);

    for(i=1; i <= n; ++i)
    {
        sum += i;   
    }

    printf("Sum = %f",sum);

    return 0;
}
