/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:19 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 14:15:27 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char *str = "iliass";
		ft_printf("%d\n",ft_printf("hel%%lo bro you are %s %c you are %d",str, 'W', 100));
		printf("%d\n",printf("hel%%lo bro you are %s %c you are %d",str, 'W', 100));
}
