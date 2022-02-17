/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 08:33:33 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/17 12:07:10 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 0 || nb == 1)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = 0;
	while (ft_is_prime(i + nb) == 0)
		i++;
	return (i + nb);
}
/*
#include <stdio.h>

int	main(void    )
{
    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
            ft_find_next_prime(-1) == 2 ? "OK" : "Fail",
            ft_find_next_prime(-3) == 2 ? "OK" : "Fail",
            ft_find_next_prime(0) == 2 ? "OK" : "Fail",
            ft_find_next_prime(1) == 2 ? "OK" : "Fail",
            ft_find_next_prime(2) == 2 ? "OK" : "Fail",
            ft_find_next_prime(3) == 3 ? "OK" : "Fail",
            ft_find_next_prime(4) == 5 ? "OK" : "Fail",
            ft_find_next_prime(5) == 5 ? "OK" : "Fail",
            ft_find_next_prime(6) == 7 ? "OK" : "Fail",
            ft_find_next_prime(7) == 7 ? "OK" : "Fail",
            ft_find_next_prime(10) == 11 ? "OK" : "Fail",
            ft_find_next_prime(11) == 11 ? "OK" : "Fail",
            ft_find_next_prime(13) == 13 ? "OK" : "Fail",
            ft_find_next_prime(19) == 19 ? "OK" : "Fail",
            ft_find_next_prime(20) == 23 ? "OK" : "Fail"
          );
}
*/
