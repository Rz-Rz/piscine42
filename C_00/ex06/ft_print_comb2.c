/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:19:22 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/06 15:32:31 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < 100)
	{
		while (k < 100)
		{
			if (i < k)
			{
				ft_putchar(i / 10 + '0');
				ft_putchar(i % 10 + '0');
				ft_putchar(' ');
				ft_putchar(k / 10 + '0');
				ft_putchar(k % 10 + '0');
				if (!(i == 98 && k == 99))
					write(1, ", ", 2);
			}
			k++;
		}
		k = 0;
		i++;
	}
}
