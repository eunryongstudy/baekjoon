#include<stdio.h>
int	main()
{
	int	a, b, c;
	int	cdiv,cmod;
	scanf("%d %d\n%d",&a, &b, &c);

	cdiv = c/60;
	cmod = c%60;
	if(b + cmod > 60)
	{
		if(a + cdiv + 1>= 24)
		{
			a = a + cdiv - 24 + 1;
			b = b + cmod - 60;
			printf("%d %d", a, b);
		}
		else
		{
			a = a + cdiv + 1;
			b = b + cmod - 60;
			printf("%d %d", a, b);
		}
	}
	else
	{
        	if(a + cdiv >= 24)
			{
				a = a + cdiv - 24;
				b = b + cmod;
				printf("%d %d", a, b);
			}
        	else
        	{
			a = a + cdiv;
			b = b + cmod;
			printf("%d %d", a, b);
        	}
	}
}
