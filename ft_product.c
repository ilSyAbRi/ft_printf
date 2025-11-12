
#include <stdio.h>
#include <stdarg.h>

int	ft_product(int count , ...)
{
	int	i;

	va_list args;

	va_start(args,count);
	i = 0;
	int  multiple = 1;
	while (i < count)
	{
		multiple = multiple * va_arg(args,int);
	i++;
	}
	return multiple;
}

int main()
{
	printf("%d\n",ft_product(4,3,5,2,2));
}
