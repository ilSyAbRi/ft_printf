#include <stdio.h>
#include <stdarg.h>

int	ft_max(int count, ...)
{
	va_list args;

	va_start(args,count);

	int	i;
	int	max;
	int	curent_val = va_arg(args,int);

	max = curent_val;
	i = 0;
	while (i < count)
	{
		curent_val = va_arg(args,int);
		if (curent_val > max)
		max = curent_val;
	i++;
	}
	return max;
}

int	main()
{

	printf("%d\n",ft_max(9,1,2,3,4,6,5,4,2,1));
}
