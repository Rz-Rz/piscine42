/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 06:23:33 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/14 15:13:06 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);
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
	ft_putstr("abcdefg-yz:");
	ft_putstr(ft_strlowcase(c));
	ft_putstr(":");
	ft_putstr(c);
}
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'a' + str[i] - 'A';
		i++;
	}
	return (str);
}
