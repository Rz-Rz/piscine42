/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 06:38:33 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/15 15:40:42 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *src);

/*
void	ft_putstr(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int	main(void)
{
	char	c[];

	c[] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";
	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
	ft_putstr(ft_strcapitalize(c));
	ft_putstr(":");
	ft_putstr(c);
}
*/

int	ft_isnumeric(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

int	ft_islower(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isupper(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isnumeric(str[i]) || ft_islower(str[i]) || ft_isupper(str[i]))
		{
			if (ft_isnumeric(str[i]))
				while (ft_isnumeric(str[i]))
					i++;
			else if (ft_islower(str[i]))
				str[i] -= 32;
			while (ft_islower(str[++i]) || ft_isupper(str[i]))
			{
				if (ft_isupper(str[i]))
					str[i] += 32;
			}
		}
		else
			i++;
	}
	return (str);
}
