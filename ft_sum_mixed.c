#include <stdio.h>
#include <stdarg.h>

int	ft_sum_mixed(int count , ...)
{
	va_list args;

	va_start(args,count);

	int	i = 0;
	int sum = 0;
	while (i < count)
	{
		va_arg(args,char*);
		sum = sum + va_arg(args,int);
	i++;
	}
	va_end(args);
	return sum;
}

int main()
{
	int result = ft_sum_mixed(3, "ItemA", 10, "ItemB", 5, "ItemC", 2);
	printf("%d\n",result);
}
