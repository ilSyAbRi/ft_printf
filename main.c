/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:19 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 17:50:08 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char str[] = "iliass";
		ft_printf("%d\n",ft_printf("hello %d %u %i ",10, 100, 1000));
		printf("%d\n",printf("hello %d %u %i ",10,100,1000));
}
