#include<stdio.h>
int	main()
{
	int	a, b, temp, i;
	scanf("%d", &a);
	i = 0;
	b = -1;
	temp = a;
	while(temp != b)
	{
		b = (a % 10) * 10;
		a = (a / 10) + (a % 10);
		b += a % 10;
		a = b;
		i++;
	}
	printf("%d", i);
}
