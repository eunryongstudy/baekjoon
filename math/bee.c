#include<stdio.h>
int	main()
{
	int	N, i, j, count = 2;
	scanf("%d", &N);
	if (N == 1)
	{
		printf("1");
		return 0;
	}
	i = 2;
	j = 5;
	while(1)
	{
		if(i <= N && i + j >= N)
		{
			printf("%d", count);
			break;
		}
		i = i + j + 1;
		j += 6;
		count++;
	}
}
