#include<stdio.h>
int	main()
{
	int	N, count;
	scanf("%d", &N);
	count = 0;
	for(int	i = 1; i < N;i++)
	{
		if (i <= 10)
			count++;
		else if (i < 100)
			count++;
		else
			if ( (i / 100) - (i / 10 % 10) == (i / 10 % 10) - i % 10)
				count++;
	}
	printf("%d", count);
}
