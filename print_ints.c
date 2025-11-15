/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 01:42:53 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/15 02:10:57 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1,"-2147483648",11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);	
}

void	print_ints(int count, ...)
{
	int	i;

	i = 0;
	va_list args;

	va_start(args,count);

	while (i < count)
	{
		ft_putnbr(va_arg(args,int));
		ft_putchar('\n');
	i++;
	}
}

int	main()
{
	print_ints(3,42,-7,0);
	return 0;
}
