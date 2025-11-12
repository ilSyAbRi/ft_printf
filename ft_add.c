#include <stdio.h>
#include <stdarg.h>

int	ft_add(int count, ...)
{
	va_list args;

	va_start(args,count);

	int	i;
	int	curent_val = 0;

	i = 0;
	while (i < count)
	{
		curent_val = curent_val + va_arg(args,int);
	i++;
	}
	return curent_val;
}

int	main()
{
	//char c = 'a';
	printf("%d\n",ft_add(3,1,2,3));
}
