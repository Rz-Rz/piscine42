/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:51:57 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/19 14:51:36 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			nb *= -1;
			ft_putchar('-');
		}
	}
	if (nb <= 9 && nb >= 0)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

/*
int	main(void)
{
		ft_putnbr(-2147483648);
        ft_putchar('\n');
		ft_putnbr(-2147483647);
        ft_putchar('\n');
		ft_putnbr(2147483647);
        ft_putchar('\n');
		ft_putnbr(9);
}
*/
