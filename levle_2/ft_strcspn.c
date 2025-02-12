#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t count = 0;
    size_t i = 0;

    while (*s)
    {
        size_t i = 0;
        while (reject[i])
        {
            if (*s == reject[i])
                return count;

            i++;
        }
        count++;
        s++;
    }
    return count;
}

int main()
{
    char s[] = "123abc456";
    char reject[] = "abc";
    printf("%zu\n", ft_strcspn(s, reject));
    return 0;
}

