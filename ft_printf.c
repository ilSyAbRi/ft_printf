/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:44:02 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/19 13:56:23 by ilsyabri         ###   ########.fr       */
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
		|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_do_normal_things(char *str, va_list *list)
{
	int	i;
	int	count;
	int	track;

	i = 0;
	count = 0;
	while (str[i])
	{
		track = check_valid_conversion(str[i + 1]);
		if (str[i] == '%' && str[i + 1] != '\0' && track)
		{
			count = count + dispatch_function(str[i + 1], list);
			i = i + 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			count++;
			track = 0;
		}
	if (str[i] == '\0' && i > 1 && str[i - 1] == '%')
		return -1;
	else if (str[i] == '\0' && i == 1 &&
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	int		track;
	va_list	args;

	count = ft_do_normal_things(str,&args);
	va_end(args);
	return (count);
}
