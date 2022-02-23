/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:02:35 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/22 17:16:53 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_basewalk(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (c == base[i])
			return (i);
	}
	return (-1);
}

int	ft_baselen(char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		else if (base[i + 1] && ft_basewalk(base[i], base + i + 1) >= 0)
			return (0);
		else if (base[i] >= 9 && base[i] <= 13)
			return (0);
	}
	return (i);
}

int	ft_intlen(long n, int bsize)
{
	if (n < bsize)
		return (1);
	return (1 + ft_intlen(n / bsize, bsize));
}
