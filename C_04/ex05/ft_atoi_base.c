/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:47:09 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/16 09:47:10 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(char *str, char *base);

int     ft_isneg(int neg, int nb)
{
		if (neg % 2 != 0)
				nb *= -1;
		return (nb);
}

int is_inbase(char c, char *base)
{
		int i;

		i = -1;
		while (base[++i])
		{
				if (c == base[i])
		}

}

int ft_baselen(char *base)
{
		int i;

		i = 0;
		while (base[i])
		{
				if (base[i] =='+' || base[i] =='-')
						return 0;
				else if (base[i] < 32 && base[i] >= 0)
						return 0;
				else if ()

		}
		i++;
		return (i);
}

int     ft_atoi(char *str)
{
		int     nb;
		int     neg;
		char arr;

		while (*str)
		{
				while ((*str >= 9 && *str <= 13) || (*str == ' '))
						str++;
				if ((*str >= 33 && *str <= 126) || *str == '-' || *str == '+')
				{
						while (*str == '-' || *str == '+')
						{
								if (*str == '-')
										neg++;
								str++;
						}
						while (*str >= 33 && *str <= 126)
						{
								arr[i++] = *str; 
								str++;
						}
						break ;
				}
				str++;
		}
		return (nb);
}
