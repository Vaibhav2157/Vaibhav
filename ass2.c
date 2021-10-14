#include <stdio.h>

int primenum(int a, int b)
{
    int prime = 0;

    printf("Prime numbers are:\n");

    for (int i = a; i <= b; i++)
    {
        prime = 0;
        for (int j =1; j <= i; j++)
        {
            if (i % j == 0)
            {
                prime++;
            }
        }
        if (prime == 2)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int a, b;

    printf("Enter interval to find prime numbers:\n ");
    scanf("%d %d", &a, &b);

    primenum(a, b);

    return 0;
}
