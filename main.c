/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:19 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/17 13:51:04 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	nb_ft_printf;
	int	nb_printf;

	nb_ft_printf = ft_printf("hello bro you are %c you are %d", 'W', 100);
	printf("\n%d", nb_ft_printf);
	printf("\n");
	nb_printf =       printf("hello bro you are %c you are %d", 'W', 100);
	printf("\n%d", nb_printf);
}
