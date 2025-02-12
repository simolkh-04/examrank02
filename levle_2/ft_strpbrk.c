#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i;

    while (*s1)
    {
        i = 0;
        while (s2[i])
        {
            if (*s1 == s2[i])
                return (char *)s1;
            i++;
        }
        s1++;
    }
    return (NULL);
}

int main()
{
    const char *s = "123456j000000000";
    const char *accept = "mmmmmjwwwwww";

    char *result = ft_strpbrk(s, accept);

    if (result != NULL)
        printf("%c\n", *result);
    else
        printf("\n");

    return 0;
}