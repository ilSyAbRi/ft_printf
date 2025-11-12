
#include <stdio.h>
#include <stdarg.h>

int	ft_first_negative(int dummy, ...)
{
	va_list args;

	va_start(args,dummy);
	
	int i = 0;
	int nb = 0;
	int neg_nb = -1;

	while (i < dummy)
	{
		nb = va_arg(args,int);
		if (nb < 0)
			return neg_nb = nb;
	i++;
	}
	return neg_nb;
}

int	main()
{
	printf("%d\n",ft_first_negative(5,10,5,-2,8,0));
	printf("%d\n",ft_first_negative(4,10,5,8,0));
	
}
