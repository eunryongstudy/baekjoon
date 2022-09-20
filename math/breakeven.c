#include<stdio.h>
int	main()
{
	long	a, b, c;
	int	i;
	scanf("%ld %ld %ld", &a, &b, &c);
	if ( b >= c)
	{
		printf("-1");
		return 0;
	}
	i = a/(c - b) +1;
	printf("%d", i);
}
