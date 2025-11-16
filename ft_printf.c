/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:44:02 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/16 16:30:33 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_check_and_do(char c, ...)
{
	if (c == 'c')
		ft_putchar(va_arg(c,char));
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
			ft_check_and_do(str[i + 1]);
		ft_putchar(str[i]);
		i++;
	}
	va_end(args);
}
