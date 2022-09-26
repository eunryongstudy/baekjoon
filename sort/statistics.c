#include<stdio.h>
int	main()
{
	int	N, sum = 0, max = 0, flag = 0,most = 0, k;
	scanf("%d", &N);
	int	num[N], count[10001] = { 0 };
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
		count[num[i]]++;
		sum += num[i];
		if (max < num[i])
			max = num[i];
	}
	printf("%.1f\n", (float)sum/N);
	printf("%d\n", num[(N-1)/2 +1]);
	for(int	i= 0;i < max ;i++)
		for(int	j = i + 1; j < max; j++)
		{
			if(num[i] < num[j])
			{
				most = num[j];
				k = j;
				
			}
