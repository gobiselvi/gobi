#include <stdio.h>
int main()
{
    intdouble v1, v2, v3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &v1, &v2, &v3);

    if (v1>=v2)
    {
        if(v1>=v3)
            printf("%.2lf is the largest number.", v1);
        else
            printf("%.2lf is the largest number.", v3);
    }
    else
    {
        if(v2>=v3)
            printf("%.2lf is the largest number.", v2);
        else
            printf("%.2lf is the largest number.",v3);
    }
    
    return 0;
}
