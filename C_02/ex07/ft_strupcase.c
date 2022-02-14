/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 06:06:59 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/14 15:10:47 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);
/*
#include <unistd.h>

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "AbCdEfG-Yz";
	ft_putstr("ABCDEFG-YZ:");
	ft_putstr(ft_strupcase(c));
	ft_putstr(":");
	ft_putstr(c);
}
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'A' + str[i] - 'a';
		i++;
	}
	return (str);
}
