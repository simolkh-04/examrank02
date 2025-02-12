#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int tmp;
    unsigned int i = 0;

    while (i < size)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;

    }
}
int main()
{
    int tab[] = {7, 3, 1, 5, 4, 6};
    unsigned int size = 6;
    sort_int_tab(tab, size);

    unsigned int i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    return 0;
}