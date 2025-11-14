/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:44:02 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/14 18:55:12 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static ft_check(char *str)
{
	int	i ;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'c')

		else if (str[i] == 's')

		else if (str[i] == 'p')

		else if (str[i] == 'd')

		else if (str[i] == 'i')

		else if (str[i] == 'u')

		else if (str[i] == 'x')

		else if (str[i] == 'X')

		else if (str[i] == '%')

	i++;
	}
}

int	ft_printf(const char *str, ...)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
			ft_check(&str[i + 1]);
	}
}
