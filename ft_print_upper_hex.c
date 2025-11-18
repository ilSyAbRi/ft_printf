/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upper_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:17:01 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 14:24:27 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"

void	ft_print_upper_hex(int nb)
{
	int	i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	if (nb > 15)
		ft_print_upper_hex(nb /16);
	ft_putchar(hex[nb % 16]);

}
