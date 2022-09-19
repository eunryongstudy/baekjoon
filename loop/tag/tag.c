#include<stdio.h>
int	main()
{
	int	total, count, num, price, tag;
	tag = 0;
	scanf("%d", &total);
	scanf("%d", &count);
	while(count>0)
	{
		scanf("%d %d", &num, &price);
		tag = tag + (num * price);
		count--;
	}
	if (total == tag)
		printf("Yes");
	else
		printf("No");
}
