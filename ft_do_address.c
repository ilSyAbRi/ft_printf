/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:23:09 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 21:43:52 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_do_address(va_list *list)
{
	if (*list == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	unsigned long	addr;

	addr = (unsigned long)va_arg(*list,void*);

	ft_putstr("0x");
	ft_print_hex(addr,0);
	return (2 + ft_count_unsigned_base(addr,16));	
}
