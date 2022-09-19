#include<stdio.h>
int	main()
{
	int	a;
	int	b;
	scanf("%d",&a);
	b = 0;
	while(a>0)
	{
		b += a;
		a--;
	}
	printf("%d", b);
}
