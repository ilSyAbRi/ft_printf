
#include <stdio.h>
#include <stdarg.h>

int	ft_first_negative(int dummy, ...)
{
	va_list args;

	va_start(args,dummy);
	
	int nb;

	while (1)
	{
		nb = va_arg(args,int);
		if (nb < 0)
			return nb;
		if (nb == 0)
			return -1;
	}
}

int	main()
{
	printf("%d\n",ft_first_negative(5,10,5,-2,8,0));
	printf("%d\n",ft_first_negative(4,10,5,8,0));
	
}
