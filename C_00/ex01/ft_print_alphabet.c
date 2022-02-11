/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:14:26 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/03 13:57:58 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
		ft_putchar(i++);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
