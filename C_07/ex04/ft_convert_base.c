/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:02:12 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/22 17:30:54 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_baselen(char *str);
int ft_basewalk(char c, char *str);
int ft_intlen(int n, int bsize);

char *ft_itoa(int nb, char* base)
{
		int bsize;
		int i;
		int neg;
		char *dest;

		bsize = ft_baselen(base);
		if (bsize < 2)
				return (NULL);
		i = 0;
		if (nb < 0)
		{
				nb *= -1;
				i++;
				neg = -1;
		}
		i += ft_intlen(nb, bsize);
		dest = malloc(sizeof(char) * i + 1);
        dest[i] = '\0';
		while (i)
		{
				dest[--i] = base[nb % bsize];
				nb /= bsize;
		}
		if (neg == -1)
				dest[0] = '-';
		return (dest);
}


int ft_atoi_base(char *str, char *base)
{
		int nb;
		int neg;
		int size;

		neg = 0;
		nb = 0;
		size = ft_baselen(base);
        printf("LAAAAAAAAA \n");
		if (size < 2)
				return (0);
		while ((*str >= '\t' && *str <= '\r') || *str == ' ')
				str++;
		while (*str == '-' || *str == '+')
				if (*str++ == '-')
						neg++;
		while (ft_basewalk(*str, base) >= 0)
				nb = nb * size + ft_basewalk(*str++, base);
		if (neg % 2 != 0)
				nb *= -1;
		return (nb);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
		int n;
		char *dest;

		n = ft_atoi_base(nbr, base_from);
		dest = ft_itoa(n, base_to);
		return (dest);
}

#include <stdio.h>

int	main(void)
{
    char *str = ft_convert_base("0", "0123456789abcdef", "0123456789");
    char *str2 = ft_convert_base("-2147483648", "0123456789", "0123456789abcdef");
		printf("42:%s\n", str);
		printf("-2a:%s\n", str2);
		free(str);
		free(str2);
}
