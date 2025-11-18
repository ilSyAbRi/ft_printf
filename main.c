/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:19 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 12:26:46 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
		ft_printf("%d\n",ft_printf("hello bro you are %c you are %d", 'W', 100));
		printf("%d\n",printf("hello bro you are %c you are %d", 'W', 100));
}
