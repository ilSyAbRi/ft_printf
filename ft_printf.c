/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:44:02 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 12:30:32 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_and_do(char c, va_list *list)
{
	int count;
	int	keep;

	count = 1;
	if (c == 'c')
	{
		keep = va_arg(*list,int);
		ft_putchar(keep);
		count = 1;
	}
	else if (c == 'd'|| c == 'i')
	{
		keep = va_arg(*list,int);
			count = ft_count_signed_base(keep,10);
			ft_putnbr(keep);
	}
	return count;
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
			count = count + ft_check_and_do(str[i + 1], &args);
			i = i + 2;
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
