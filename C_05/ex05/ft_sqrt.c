/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:33:44 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/21 17:25:53 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
    int	sqrt;
    int temp;

	sqrt = nb / 2;
    temp = 0;
	while (sqrt != temp)
	{
        temp = sqrt;
        sqrt = (nb / temp + temp) / 2;
	}
	return (sqrt);
}
#include <stdio.h>


int	main(void)
{
	printf("10:%d\n", ft_sqrt(100));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));
	printf("?:%d\n", ft_sqrt(4268968));
	printf("?:%d\n", ft_sqrt(2147483647));

}
