/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:13:38 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 19:03:22 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned long nb, int track)
{
	char	*hex[2];

	hex[0] = "0123456789abcdef";
	hex[1] = "0123456789ABCDEF";
	if (nb > 15)
		ft_print_hex(nb / 16, track);
	ft_putchar(hex[track][nb % 16]);
}
