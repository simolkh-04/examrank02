#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0;
}

int main()
{
    unsigned int n;

    printf("Enter a number: ");
    
    scanf("%u", &n);

    if (is_power_of_2(n))
        printf("%u is a power of 2.\n", n);
    else
        printf("%u is not a power of 2.\n", n);

    return 0;
}
