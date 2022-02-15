/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:43:59 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/15 19:01:17 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr_base(int nbr, char *base)
{
    
}

int ft_checkbase(char *base)
{
    int i;
    int j;

    i = 0;
    if (ft_strlen(base) == 1)
        return (0);
    while (base[i] != 0)
    {
        j = 0;
        while (base[i + j] != 0)
        {
            if (base[i] == base[i + j]) 
                return (0);

        }
    }
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '0')
        i++;
    return (i);
}
