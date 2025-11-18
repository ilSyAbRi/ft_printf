/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:04:00 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 19:23:13 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_do_hex(char c, va_list *list)
{
	unsigned long	keep;

	keep = va_arg(*list,unsigned long);
	if(c == 'x')
	{
		ft_putstr("0x");
		ft_print_hex(keep,0);
		return (2 + ft_count_unsigned_base(keep,16));
	}
	else if (c == 'X')
	{
		ft_putstr("0x");
		ft_print_hex(keep,1);
		return (2 + ft_count_unsigned_base(keep,16));
	}
	return 0;
}
