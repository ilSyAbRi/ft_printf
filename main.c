/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:19 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/19 15:56:06 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <limits.h> // For INT_MAX, INT_MIN, etc.
#include <stdio.h>

int	main(void)
{
	ft_printf("\n%d\n",ft_printf("hello%"));
	printf("\n%d\n",printf("hello%"));
	return (0);
}
