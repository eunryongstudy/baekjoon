#include<stdio.h>
int	main()
{
	int	a, max;
	float	average;
	scanf("%d", &a);
	int	score[a];
	for(int i = 0;i < a; i++)
	{
		scanf("%d", &score[i]);
	}
    		max = 0;
	for(int	i = 0; i < a; i++)
	{
		if(max < score[i])
			max = score[i];
	}
    	average = 0;
	for(int	i = 0; i < a; i++)
	{
		average = average + ((float)score[i]*100 / max);
	}
	average /= a;
	printf("%f", average);
}
