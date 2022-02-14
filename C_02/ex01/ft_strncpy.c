/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:30:19 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/14 12:36:50 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
int	main(void)
{
    char destination[20];
	unsigned int	num;
    int i;
	char			dest[];
	char			src[];

    char* source = "Techie Delight";
    num = 6;
    printf("%s\n", ft_strncpy(destination, source, num));
    
	dest[] = "Epic fail !!!!!";
	src[] = "Success";
	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 20), dest);
	i = 9;
	while (i < 15)
	{
		if (dest[i] != '\0')
		{
			printf("FAIL! Remainder of dst must be filled with `\\0' characters,
					got %c (\\%x) at pos %d\n", dest[i], dest[i], i);
			return (1);
		}
		i++;
	}
    
    return (0);
}
*/
