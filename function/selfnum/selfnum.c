#include<stdio.h>
int	sum(int n)
{
	int	sum = n;

	while(n> 0)
	{
		sum += n% 10;
		n /= 10;
	}
	return (sum);
}
int	main()
{
	int	num[10001], check;
	for(int i = 1;i < 10001;i++)
	{
		check = sum(i);
		if(check < 10001)
			num[check] = 1;
	}
	for(int i = 1; i < 10001; i++)
	{
		if(num[i] != 1)
			printf("%d\n", i);
	}
}
