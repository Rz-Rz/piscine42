/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 05:55:36 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/09 05:55:42 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != 0)
	{
		c = str[i];
		if (c < ' ' || c > '~')
			return (0);
		i++;
	}
	return (1);
}
