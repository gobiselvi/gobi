#include <stdio.h>

int main()
{
    int n, num1, num2, min, hcf=1;

   
    
    printf("Enter any two numbers to find HCF: ");
    scanf("%d%d", &num1, &num2);


    min = (num1<num2) ? num1 : num2;

    for(n=1; n<=min; n++)
    {
    
        if(num1%n==0 && num2%n==0)
        {
            hcf = n;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    return 0;
