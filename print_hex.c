/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 04:10:28 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/15 04:23:32 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_hex(int count , char format, ...)
{
	char hex_char[] = "abcdef0123456789";
	char HEX_CHAR[] = "ABCDEF0123456789";

	int	i;
	int	keep;

	i = 0;
	while (i < count)
	{
		keep = va_arg(args,int);
		while (keep != 0)
		{
			keep = keep / 16;
		}
	i++;
	}
}

int	main()
{
	print_hex(2,'x',255,16);
}
