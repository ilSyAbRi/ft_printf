/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_print_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 00:16:18 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/15 00:28:43 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	print_chars(int count, ...)
{
	va_list	args;

	va_start(args,count);

	int	i;

	i = 0;
	while (i < count)
	{
		ft_putchar(va_arg(args,int));
	i++;
	}
	va_end(args);
}

int	main()
{
	print_chars(3,'a','A','b');
}
