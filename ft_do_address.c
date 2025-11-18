/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:23:09 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 22:27:08 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_do_address(va_list *list)
{
	unsigned long	addr;

	addr = (unsigned long)va_arg(*list,void*);

	if (addr == 0)
	{
		ft_putstr("(nil)");
		return 5;
	}
	ft_putstr("0x");
	ft_print_hex(addr,0);
	return (2 + ft_count_unsigned_base(addr,16));	
}
