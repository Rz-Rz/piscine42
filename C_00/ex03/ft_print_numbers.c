/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:06:03 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/03 14:30:32 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
		ft_putchar(i++);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
