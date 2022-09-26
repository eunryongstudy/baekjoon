#include<stdio.h>
#include<stdlib.h>

int	compare(int a, int b)
{
	if (a < b)
		return 1;
	if (a > b)
		return -1;
	return 0;
}

int	main()
{
	int	N, temp;
	scanf("%d", &N);
	int	num[N];
	for(int	i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);
	for(int	i = 0; i < N; i++)
		printf("%d", num[i]);
}
