/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:30:19 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/08 18:21:53 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptr;

	ptr = dest;
	n++;
	while (*src && --n)
		*dest++ = *src++;
	while (--n)
		*dest++ = '\0';
	return (ptr);
}
/*int main(void)
{
    char* source = "Techie Delight";
    char destination[20];

    unsigned int num = 6;

    printf("%s", ft_strncpy(destination, source, num));

    return (0);
}*/
