#include<stdio.h>
int	main()
{
	int	N, temp;
	scanf("%d", &N);
	int	num[N];
	for(int	i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	for(int	i = 0; i < N; i++)
	{
		for(int	j = i + 1; j < N; j++)
		{
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for(int	i = 0; i < N; i++)
	{
		printf("%d\n", num[i]);
	}
}
