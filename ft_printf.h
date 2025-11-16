/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:14:49 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/16 16:40:28 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_A
#define PRINTF_A

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(const char *str, ...);
void	ft_putchar(char c);

#endif
