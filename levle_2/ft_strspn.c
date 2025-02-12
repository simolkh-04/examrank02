#include <stdio.h>

size_t  ft_strspn(const char *s, const char *accept)
{
        size_t  i;
        size_t  j;

        i = 0;
        while (s[i])
        {
                j = 0;
                while (accept[j])
                {
                        if (s[i] == accept[j])
                                 break ;
                        j++;
                }
                if (!accept[j])
                         break ;
                i++;
        }
        return (i);
}

int main()
{
    char s[] = "123abc456";
    char accept[] = "1234567890";

    size_t len = ft_strspn(s, accept);
    printf("%zu\n", len);
    return 0;
}
