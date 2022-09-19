#include<stdio.h>
int	main()
{
	int	a, min, max;
	scanf("%d", &a);
	int	array[a];
	for(int	i = 0; i < a;i++)
	{
		scanf("%d", &array[i]);
	}
	min = array[0];
	max = array[0];
	for(int	i = 0; i < a; i++)
	{
		if(min > array[i])
			min = array[i];
		if(max < array[i])
			max = array[i];
	}
	printf("%d %d", min, max);
}
