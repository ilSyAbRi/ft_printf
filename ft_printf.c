/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:44:02 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/17 13:14:31 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_and_do(char c, va_list *list)
{
	int	i;

	i = 1;
	if (c == 'c')
		i = ft_putchar(va_arg(*list, int));
	else if (c == 'd')
		i = ft_putnbr(va_arg(*list,int));

	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int	count;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i = i + ft_check_and_do(str[i + 1], &args);
		count++;
		}	
		else
			ft_putchar(str[i]);
		i++;
		count++;
	}
	va_end(args);
	return count;
}
