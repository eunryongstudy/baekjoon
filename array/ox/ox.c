#include<stdio.h>
#include<string.h>
int	main()
{
	int	a, sum, score;
	char	ox[80];
	scanf("%d", &a);
	for(int i = 0;i < a; i++)
	{
		sum = 0;
		score = 1;
		scanf("%s", ox);
		for(int	j = 0;j < strlen(ox);j++)
		{
			if(ox[j] == 'O')
			{
				sum += score;
				score++;
			}
			if(ox[j] == 'X')
				score = 1;
		}
		printf("%d\n", sum);
	}
}

