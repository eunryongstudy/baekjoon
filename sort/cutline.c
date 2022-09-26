#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)   
{
    int num1 = *(int *)a;   
    int num2 = *(int *)b;    
    if (num1 < num2)   
        return -1;     
    
    if (num1 > num2)   
        return 1;      
    return 0;   
}
int	main()
{
	int	N, k;
	scanf("%d %d", &N, &k);
	int	num[N];
	for(int	i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	qsort(num,sizeof(num)/sizeof(int),sizeof(int),compare);
	printf("%d", num[N - k]);
}
