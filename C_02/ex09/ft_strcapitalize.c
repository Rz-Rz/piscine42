/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 06:38:33 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/09 06:52:41 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (!(str[0] >= 'A' && str[0] <= 'Z'))
		str[0] = 'A' + str[0] - 'a';
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'a' + str[i] - 'A';
		}
		i++;
	}
	return (str);
}
