#include <stdio.h>

int max(int *tab, unsigned int len)
{
	int result;
	int i = 0;
	int j = 0;
	
	while(i < len)
	{
		if (tab[i] >  tab[j])
		{
			result = tab[i];
			j++;
		}
		else
		{
			i++;
		}
	}
	return result;
}

int main ()
{
    int tab[] = {2, 6, 9, 13 , 7, -22, 19};
    printf("%d\n", max(tab, 7));
    return (0);
}
