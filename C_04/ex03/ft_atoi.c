/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:50:47 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/18 11:29:14 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isneg(int neg, int nb)
{
	if (neg % 2 != 0)
		nb *= -1;
	return (nb);
}

int	ft_atoi(char *str)
{
    int	nb;
    int	neg;

    nb = 0;
    neg = 0;
    while ((*str >= 9 && *str <= 13) || (*str == ' '))
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            neg++;
        str++;
    }
    while (*str >= '0' && *str <= '9')
        nb = nb * 10 + *str++ - '0';
    nb = ft_isneg(neg, nb);
    return (nb);
}

/*
int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
	printf("0:%d\n", ft_atoi(" --+- 42sfs:f545"));
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-100:%d\n", ft_atoi("-100"));
	printf("min:%d\n", ft_atoi("\t---+2147483648"));
	printf("max:%d\n", ft_atoi("\v2147483647"));
}
*/
