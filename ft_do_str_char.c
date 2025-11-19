/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_str_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 20:35:31 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 21:04:34 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_do_str_char(char c, va_list *list)
{
	char	*str;
	int		val_of_char;

	if (c == 's')
	{
		str = va_arg(*list, char *);
		if (str == NULL)
		{
			ft_putstr("(null)");
			return (6);
		}
		ft_putstr(str);
		return (ft_strlen(str));
	}
	else if (c == 'c')
	{
		val_of_char = va_arg(*list, int);
		ft_putchar(val_of_char);
		return (1);
	}
	return (0);
}
