/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:20:55 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/10 19:33:07 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
		char *start = dest;

		while(*src != '\0')
		{
				*dest = *src;
				dest++;
				src++;
		}

		*dest = '\0';
		return start;
}

char *ft_strcpy(char *dest, char *src)
{
		int     i;

		i = 0;
		while (src[i] != '\0')
		{
				dest[i] = src[i];
				i++;
		}
		dest[i] = '\0';
		return dest;
}

unsigned int strlcpy(char *dest, char *src, unsigned int dest_size)
{
	int offset;

	offset = 0;
	if (dest_size > 0)
	{
		while (*(src + offset) != '\0')
		{
			if (offset == dest_size)
			{
				offset--;
				break;
			}

			*(dst + offset) = *(src + offset);
			offset++;
		}

	}
	*(dst + offset) = '\0';
	
	while (*(src + offset) != '\0')
		offset++;
	return (offset);
}
