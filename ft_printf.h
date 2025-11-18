/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:14:49 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/18 20:44:23 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// the main function
int		ft_printf(const char *str, ...);

//	helper function
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(long nb);
int	ft_strlen(char *str);
void	ft_print_hex(unsigned long nb,int track);

//	function of count
int	ft_count_signed_base(long nb, int base);
int	ft_count_unsigned_base(unsigned long nb, int base);


//	the main helper function
int	ft_do_base_10(char c ,va_list *list);
int	ft_do_hex(char c, va_list *list);
int	ft_do_str_char(char c, va_list *list);
#endif
