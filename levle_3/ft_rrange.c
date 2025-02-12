#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int i = 0;
	int len = (end - start) + 1;
	int *res = (int *)malloc(sizeof(int )*len);

	while (i < len)
	{
		if (start < end)
		{

			res[i] = end;
			end--;
			i++;
		}
		else
		{
			res[i] = end;
			end++;
			i++;
		}
	}
	return (res);
}
int main()
{
    int start = -2;
    int end = 5;
    int *range = ft_rrange(start, end);
    int len = abs(end - start) + 1;

    printf("Reversed range from %d to %d:\n", start, end);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");
    free(range);
    return 0;
}