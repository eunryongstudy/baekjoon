#include<stdio.h>
int	main()
{
	int	total, sum;
	scanf("%d", &total);
    char    a[total];
	scanf("%s", a);
	sum = 0;
    for(int i = 0; i < total; i++)
        sum += a[i] - '0';
    printf("%d", sum);
}
