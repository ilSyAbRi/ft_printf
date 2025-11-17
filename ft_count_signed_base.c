/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nb_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:20:27 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/17 14:39:12 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_signed_base(long nb, int base)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count++;
	nb = nb * -1;
	}
	while (nb != 0)
	{
		count++;
	nb = nb / base;
	}
	return count;
}
