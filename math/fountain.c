#include<stdio.h>
int	main()
{
	int	N, i = 1, j;
	scanf("%d", &N);
	while (1)
	{
		if((i - 1) * i / 2 < N && (i + 1) * i / 2 >= N)
		{	
			break;
		}
		i++;
	}
	if(i % 2 !=0)
	{
		j = i * (i + 1) / 2;
		printf("%d/%d", (j - N) + 1, i - (j - N));
	}
	else
	{
		j = i * (i + 1) / 2;
		printf("%d/%d", i - (j - N), (j - N) + 1);
	}
}
