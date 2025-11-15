/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 03:50:56 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/15 04:01:54 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	print_unsigned(int count, ...)
{
	va_list args;

	va_start(args,count);

	int	i;

	i = 0;
	while (i < count)
	{
		ft_putnbr(va_arg(args,unsigned int));
	i++;
	}
	va_end(args);
}

int main()
{
	print_unsigned(4,20,32,1);
}
