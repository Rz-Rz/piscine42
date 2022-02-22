/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:02:35 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/21 19:02:37 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_basewalk(char c, char *str)
{
		int i;
		
		while (str[i])
				if (c == str[i])
						return (i);
		return (-1);
}


int ft_baselen(char *str)
{
		int i;

		i = 0;
		while (str[i])
		{
				if (str[i] == '-' || str[i] == '+')
						return (0);
				if (str[i] <= 32 && str[i] >= 0)
						return (0);
				if (ft_basewalk(str[i], str + i + 1) >= 0)
						return (0);
				i++;
		}
		return (i);
}

int ft_intlen(int n, int bsize)
{
		if (n < bsize)
				return (1);
		return (1 + ft_intlen(n / bsize, bsize));
}


