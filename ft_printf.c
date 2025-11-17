/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:44:02 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/17 13:49:22 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check_and_do(char c, va_list *list)
{
	if (c == 'c')
		ft_putchar(va_arg(*list, int));
	else if (c == 'd')
		ft_putnbr(va_arg(*list, int));
}

int	check_valid_conversion(char c)
{
	if (c == 'c' || c == 's' || c == 'p'
	|| c == 'd' || c == 'i' || c == 'u'
	|| c == 'x' || c == 'X' || c == '%')
		return 1;
	return 0;
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0' && check_valid_conversion(str[i + 1]))
		{
			ft_check_and_do(str[i + 1], &args);
			i = i + 2;
			count++;
		}
		else
		{
			ft_putchar(str[i]);
		i++;
		count++;
		}
	}
	va_end(args);
	return (count);
}
