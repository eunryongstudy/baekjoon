#include<stdio.h>
int	main()
{
	int	total, y, x, n, i, j, k;
	scanf("%d", &total);
	for(i = 0; i < total; i++)
	{
		j = 1;
		scanf("%d %d %d", &y, &x, &n);
		while(1)
		{
			if((j - 1) * j / 2 < n && n <= (j + 1) * j / 2)
				break;
			j++;
		}

			k = j * (j + 1) / 2;
		if(j % 2 == 0)
		{
			if (j - (k - n)< 10)
				printf("%d0%d", k - n + 1, j - (k - n));
			else
				printf("%d%d", k - n + 1, j - (k - n));
		}
		else
		{
			if (k - n + 1 < 10)
				printf("%d0%d", j - (k - n), k - n + 1);
			else
				printf("%d%d", j - (k - n), k - n + 1);
		}
		printf("\n");
	}
}
