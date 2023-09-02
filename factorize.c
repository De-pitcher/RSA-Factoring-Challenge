#include "factor.h"

/**
 * factorize - Factorizes a number.
 *  @buffer: pointer to the address of the number 
 * Return: 0
 */

void factorize(char *buffer)
{
    long int num;
    long int i;

    num = _atoi(buffer);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%ld=%ld*%ld\n", num, num / i, i);
            break;
        }
    }
}

/*void factorize(char *buffer)
{
    long int n, p, q;

    n = _atoi(buffer);

    printf("**** %s *****\n", buffer);
    printf("**** %ld *****\n", n);

    for (p = 2; p <= n /2; p++)
    {
        if (n % p == 0 && is_prime(p) && is_prime(n / p))
        {
            q = n / p;
            printf("%ld=%ld*%ld\n", n, q, p);
            return;
        }
    }

    printf("%ld is not factorizable into two prime numbers.\n", n);
}*/

/**
 * is_prime - checks if a number is prime
 * @num: number
 * 
 * Return: 1 if true and 0 if false.
*/

int is_prime(long int num)
{
    long int i;

    if (num <= 1)
        return (0);
    if (num <= 3)
        return (1);
    if (num % 2 == 0 || num % 3 == 0)
        return (0);
    
    for (i = 5; i * i <= num; i += 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return (0);
    return (1);
}