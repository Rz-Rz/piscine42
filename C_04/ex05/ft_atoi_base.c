/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:47:09 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/16 18:09:58 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(char *str, char *base);

int ft_basewalk(char c, char *base)
{
		int i;

		i = -1;
		while (base[++i])
		{
				if (c == base[i])
                    return (i);
		}
    return (0);
}

int ft_baselen(char *base)
{
		int i;

		i = 0;
		while (base[i])
		{
            if (base[i] == '+' || base[i] == '-')
                return (0);
            else if (base[i] < 32 && base[i] >= 0)
                return (0);
            else if (ft_basewalk(base[i], base + i + 1))
                return (0);

            i++;
		}
		return (i);
}

int ft_atoi_base(char *str, char *base)
{
		int     nb;
		int     neg;
        int     i;
        int size;

        neg = 0;
        nb = 0;
        i = 0;
        if ((size = ft_baselen(base)) < 2) 
            return (0);
        while ((*str >= 9 && *str <= 13) || (*str == ' '))
            str++;
        while (*str == '-' || *str == '+')
        {
            if (*str == '-')
                neg++;
            str++;
        }
        if ((*str >= 9 && *str <= 13) || (*str == ' '))
            return (0);
        while (*str)
        {
            i = ft_basewalk(*str, base);
            nb = nb * size + i;
            str++;
        }
        if (neg % 2 == 1)
            nb *= -1;
		return (nb);
}
/*
#include <stdio.h>


int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}
*/
