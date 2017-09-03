#include <stdio.h>

int p(int n1, int n2);

int main()
{
    int base, pRaised, result;

    printf("Enter base number: ");
    scanf("%d",&base);

    printf("Enter power number(positive integer): ");
    scanf("%d",&pRaised);

    result = p(base, pRaised);

    printf("%d^%d = %d", base, pRaised, result);
    return 0;
}

int p(int base, int pRaised)
{
    if (pRaised != 0)
        return (base*p(base, pRaised-1));
    else
        return 1;
}
