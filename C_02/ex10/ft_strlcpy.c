/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:08:08 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/09 09:08:10 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i == size)
			break ;
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
