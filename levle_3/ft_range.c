// #include <stdlib.h>
// #include <stdio.h>

// int *ft_range(int start, int end)
// {
// 	int i = 0;
// 	int len = (end - start) + 1;
// 	int *res = (int *)malloc(sizeof(int) * len);

// 	while (i < len)
// 	{
// 		if (start < end)
// 		{
// 			res[i] = start;
// 			start++;
// 			i++;
// 		}
// 		else
// 		{
// 			res[i] = start;
// 			start--;
// 			i++;
// 		}
// 	}
//         return (res);
// }
// int main()
// {
//     int start = -3;
//     int end = 3;
//     int *range = ft_range(start, end);
//     int len = abs(end - start) + 1;

//     printf("Range from %d to %d:\n", start, end);
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d ", range[i]);
//     }
//     printf("\n");

//     free(range);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
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
    int start = -3;
    int end = 3;
    int *range = ft_range(start, end);
    int len = abs(end - start) + 1;
	int i = 0;

    while(i < len)
    {
        printf("%d ", range[i]);
		i++;
    }
    printf("\n");

    free(range);

    return 0;
}