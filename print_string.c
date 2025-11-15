/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 00:46:37 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/15 00:58:34 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1,&str[i],1);
	i++;
	}
}

void print_strings(int count, ...)
{
	va_list args;

	va_start(args,count);

	int	i;

	i = 0;
	while (i < count)
	{
		char *s = va_arg(args,char*);
		if (s == NULL)
			write(1,"NULL",4);
		else
			ft_putstr(s);
	write(1,"\n",1);
	i++;
	}
	va_end(args);
}

int main()
{
	print_strings(2,"hello",NULL);
}
