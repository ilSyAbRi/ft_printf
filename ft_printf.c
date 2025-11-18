/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:44:02 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 22:22:39 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	Dispatch_Function(char c, va_list *list)
{
	if (c == 'i' || c == 'd' || c == 'u')
		return (ft_do_base_10(c, list));
	else if (c == 'x' || c == 'X')
		return (ft_do_hex(c, list));
	else if (c == 's' || c == 'c')
		return (ft_do_str_char(c,list));
	else if (c == 'p')
		return (ft_do_address(list));
	else if (c == '%')
		return ft_do_modulo();
	return (0);
}

int	check_valid_conversion(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	int		track;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		track = check_valid_conversion(str[i + 1]);
		if (str[i] == '%' && str[i + 1] != '\0' && track)
		{
			count = count + Dispatch_Function(str[i + 1], &args);
			i = i + 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			count++;
			track = 0;
		}
	}
	va_end(args);
	return (count);
}
