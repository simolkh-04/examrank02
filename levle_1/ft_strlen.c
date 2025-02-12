#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *s)
{
    int i = 0;

    while(s[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    char s[] = "hello";
    int i = ft_strlen(s);
    printf("%d\n", i);
    return (0);
}