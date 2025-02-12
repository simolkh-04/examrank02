#include <stdio.h>

int ft_atoi(char *s)
{
    int result = 0;
    int sign = 1;

    while(*s == ' ' || (*s >= 9 && *s <= 13))
    s++;
    if(*s == '-')
    sign = -1;
    if(*s == '+' || *s == '-')
    s++;
    while(*s >= '0' && *s <= '9')
    {
        result = result * 10 + ( *s - 48);
        s++;
    }
    return (result * sign);
}

int main ()
{
    printf("%d\n", ft_atoi("-1234"));
}
