/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:44:02 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/19 15:42:12 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dispatch_function(char c, va_list *list)
{
	if (c == 'i' || c == 'd' || c == 'u')
		return (ft_do_base_10(c, list));
	else if (c == 'x' || c == 'X')
		return (ft_do_hex(c, list));
	else if (c == 's' || c == 'c')
		return (ft_do_str_char(c, list));
	else if (c == 'p')
		return (ft_do_address(list));
	else if (c == '%')
		return (ft_do_modulo());
	return (0);
}

int	check_valid_conversion(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%' || c == '\0')
		return (1);
	return (0);
}

int	ft_do_normal_things(const char *str, va_list *list)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
			return -1;
		if (str[i] == '%' && check_valid_conversion(str[i + 1]))
		{
			count = count + dispatch_function(str[i + 1], list);
			i = i + 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			count++;
		}
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	count;

	va_start(args,str);
	count = ft_do_normal_things(str, &args);
	va_end(args);
	return (count);
}
