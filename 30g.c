#include <stdio.h>

int main()
{
    int i, nd;
    

    printf("Print odd numbers till: ");
    scanf("%d", &nd);

    printf("All odd numbers from 1 to %d are: \n", nd);

    for(i=1; i<=nd; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
