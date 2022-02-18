/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:49:27 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/17 21:40:23 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] || str[i] == ' ')
    {
        write(1, &str[i], 1);

    }
}
int ft_strcmp(char *s1, char *s2)
{
    (*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (s1 - s2);
}

void ft_revparams(char **av, int ac)
{
 int j;
 int i;
 int temp;

 i = 1;
 while (i < ac)
 {
     j = i + 1;
     while (j < ac)
     {
         if (0 < (ft_strcmp(*av[i], *av[j])))
         {
            temp = *av[i];    
            *av[i] = av[j];
            av[j] = temp;
         }
            
        j++;
     }
     i++;
 }

}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] = '\n')
    {
        write(1, str[i], 1);
    }
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (++i < argc)
    {
        ft_revparams(**argv, argc);
    }
}
