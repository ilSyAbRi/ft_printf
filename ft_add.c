#include <stdio.h>
#include <stdarg.h>

int	ft_add(int count, ...)
{
	va_list args;

	va_start(args,count);

	int	i;
	int	sum = 0;

	i = 0;
	while (i < count)
	{
		sum += va_arg(args,int);
	i++;
	}
	return sum;
}

int	main()
{
	printf("%d\n",ft_add(4,1,2,3,4));
}
