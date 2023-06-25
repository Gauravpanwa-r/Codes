#include <stdio.h>
int prime(int n);
int twin_prime(int n1, int n2);
int gcd(int n1, int n2);
int semi_prime(int n);
int main()
{
    int cs, n1 = 0, n2 = 0;
    printf("1:Twin prime\n2:co-prime\n3:semi-prime\n");
    scanf("%d", &cs);
    switch (cs)
    {
    case 1:
        printf("Enter the numbers\n");
        scanf("%d%d", &n1, &n2);
        if (twin_prime(n1, n2) == 1)
            printf("Entered numbers are twin prime\n");
        else
            printf("Entered numbers are not twin prime\n");
        break;

    case 2:
        printf("Enter the numbers(n1>n2)\n");
        scanf("%d%d", &n1, &n2);
        if (gcd(n1, n2) == 1)
            printf("Entered numbers are co-prime\n");
        else
            printf("Entered numbers aren't co-prime\n");
        break;

    case 3:
        printf("Enter number n\n");
        scanf("%d", &n1);
        semi_prime(n1);
        break;
    }
    return 0;
}
int prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        return n;
    else
        return 0;
}
int twin_prime(int n1, int n2)
{
    if (prime(n1) == n1 && prime(n2) == n2 && (n2 - n1) == 2)
        return 1;
    else
        return 0;
}
int gcd(int n1, int n2)
{
    if (n1 % n2 == 0)
        return n2;
    else
        return gcd(n2, n1 % n2);
}
int semi_prime(int n1)
{
    int count, i, j;
    for (i = 2; i < n1; i++)
    {
        count = 0;
        
            if (prime(i) * prime(n1/i) == n1)
            {
                count=1;
                break;
            }
    }
    if (count)
    {
        printf("Its semi-prime components are %d and %d\n", i, n1/i);
    }    
    else
    {
        printf("The number is not a semi-prime number\n"); 
    }
    return 0;       
}