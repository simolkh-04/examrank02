#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}
int main()
{
    int x = 5, y = 10;
    ft_swap(&x, &y);
    printf("x%d\ny%d\n", x, y);
    return 0;
}
