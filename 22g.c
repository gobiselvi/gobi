#include <stdio.h>
int main()
{
    int b1, b2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&b1,&b2);

    while(b1!=b2)
    {
        if(b1 > b2)
            b1 -= b2;
        else
            b2 -= b1;
    }
    printf("GCD = %d",b1);

    return 0;
}
