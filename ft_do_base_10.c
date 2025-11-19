/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_base_10.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:21:24 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 17:42:03 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_do_base_10(char c, va_list *list)
{
	int				signed_nb;
	unsigned int	unsigned_nb;

	if (c == 'd' || c == 'i')
	{
		signed_nb = va_arg(*list, int);
		ft_putnbr(signed_nb);
		return (ft_count_signed_base(signed_nb, 10));
	}
	else if (c == 'u')
	{
		unsigned_nb = va_arg(*list, unsigned int);
		ft_putnbr(unsigned_nb);
		return (ft_count_unsigned_base(unsigned_nb, 10));
	}
	return (0);
}
