#include<string.h>
#include<stdio.h>
int	main()
{
	char	str[15];
	int	i, total = 0;
	scanf("%s", str);
	for(i = 0;i < strlen(str); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'C')
			total += 2;
		else if(str[i] >= 'D' && str[i] <= 'F')
			total += 3;
		else if(str[i] >= 'G' && str[i] <= 'I')
			total += 4;
		else if(str[i] >= 'J' && str[i] <= 'L')
			total += 5;
		else if(str[i] >= 'M' && str[i] <= 'O')
			total += 6;
		else if(str[i] >= 'P' && str[i] <= 'S')
			total += 7;
		else if(str[i] >= 'T' && str[i] <= 'V')
			total += 8;
		else if(str[i] >= 'W' && str[i] <= 'Z')
			total += 9;
	}
	total += strlen(str);
	printf("%d", total);
}
		
