/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:02:12 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/23 17:42:53 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_baselen(char *str);
int		ft_basewalk(char c, char *str);
int		ft_intlen(int n, int bsize);

char	*ft_itoa(int nb, char *base, int bsize)
{
	int		i;
	long	n;
	char	*dest;

	if (bsize < 2)
		return (NULL);
	i = 0;
	n = (long)nb;
	if (n < 0 && ++i)
		n *= -1;
	i += ft_intlen(n, bsize);
	dest = malloc(sizeof(char) * i + 1);
	dest[i] = '\0';
	while (i)
	{
		dest[--i] = base[n % bsize];
		n /= bsize;
	}
	if (nb < 0)
		dest[0] = '-';
	return (dest);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	neg;
	int	size;

	neg = 0;
	nb = 0;
	size = ft_baselen(base);
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*dest;
	int		bsize;

	bsize = ft_baselen(base_to);
	n = ft_atoi_base(nbr, base_from);
	dest = ft_itoa(n, base_to, bsize);
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	char	*str4;
	char	*str2;
	char	*str3;
	char	*str5;
	char	*str6;
	char	*str7;

			str = ft_convert_base("42", "0123456789abcdef", "0123456789");
			str4 = ft_convert_base("-2147483648", "0123456789", "0123456789");
			str2 = ft_convert_base("2147483647", "0123456789",
					"0123456789abcdef");
			str3 = ft_convert_base("-2a", "0123456789abcdef", "0123456789");
			str5 = ft_convert_base("-2147483648", "0123456789", "01");
			str6 = ft_convert_base("0", "0123456789", "01");
			str7 = ft_convert_base("", "0123456789", "01");
			printf("66:%s\n", str);
			printf("0:%s\n", str6);
			printf(":%s\n", str7);
			printf("-10000000000000000000000000000000:%s\n", str5);
			printf("-2147483648:%s\n", str4);
			printf("7fffffff:%s\n", str2);
			printf("-42:%s\n", str3);
			free(str);
			free(str6);
			free(str7);
			free(str2);
			free(str3);
			free(str4);
			free(str5);
}
*/
