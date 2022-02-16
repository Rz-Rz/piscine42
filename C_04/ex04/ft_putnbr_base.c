/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:43:59 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/15 22:29:55 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);

}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int ft_checkbase(char *base)
{
		int i;
		int j;

		i = 0;
		if (ft_strlen(base) <= 1)
				return (0);
		while (base[i])
		{
				j = i + 1;
				if (base[i] == '-' || base[i] == '+')
						return (0);
				else if (base[i] <= 31 && base[i] >= 0)
						return (0);

				while (base[j])
				{
						if (base[i] == base[j])
								return (0);
						j++;
				}
				i++;
		}
		return (1);
}

void ft_print(int nbr, char *base, int bsize)
{
		int rem;

		rem = 0;
		if (nbr > bsize - 1)
		{
				ft_print(nbr / bsize, base, bsize);
				rem = nbr % bsize;
				ft_putchar(base[rem]);
		}
		else
				ft_putchar(base[nbr]);
}

void ft_putnbr_base(int nbr, char *base)
{
		int bsize; 

		if (ft_checkbase(base) == 1)
		{
				bsize = ft_strlen(base);

				if (nbr < 0)
				{
						ft_putchar('-');
						nbr *= -1;
				}
				ft_print(nbr, base, bsize);
		}
}

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}


