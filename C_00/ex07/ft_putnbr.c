/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:45:39 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/06 15:33:04 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	ft_tostring(char str[], int num)
{
	int	i;
	int	rem;
	int	n;
	int	l;

	i = 0;
	n = num;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	l = i;
	i = 0;
	while (i < l)
	{
		rem = num % 10;
		num = num / 10;
		str[l - (i + 1)] = rem + '0';
		i++;
	}
	str[l] = '\0';
	return (l);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		l;
	int		j;
	char	string[11];

	j = 0;
	if (nb >= 0)
	{
		l = ft_tostring(string, nb);
		while (j < l)
			ft_putchar(string[j++]);
	}
	else
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = nb * -1;
		l = ft_tostring(string, nb);
		while (j < l)
			ft_putchar(string[j++]);
	}
}
