#include <stdio.h>

int main()
{
    int i, n, s=0;

    
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
      
        s += i;
    }

    printf("Sum of all even number between 1 to %d = %d", n, s);

    return 0;
}
