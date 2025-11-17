/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_unsigned_base.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:40:01 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/17 14:43:39 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_unsigned_base(unsigned long nb, int base)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		count++;
	nb = nb / base;
	}
	return count;
}
