#include <stdio.h>
int main()
{
    int number, on, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    on = number;

    while (on != 0)
    {
        remainder = on%10;
        result += remainder*remainder*remainder;
        on /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
