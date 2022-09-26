#include<stdio.h>
int	main()
{
	int	N, temp, max;
	scanf("%d", &N);
	int	count[10001] = { 0 };
	max = 0;
	for(int	i = 0; i < N; i++)
	{
		scanf("%d", &temp);
        count[temp]++;
        if (max < temp)
            max = temp;
	}
	for(int	i = 0; i <= max; i++)
    {
		for(int	j = 0; j < count[i]; j++)
        {
			printf("%d\n", i);
        }
    }
}
