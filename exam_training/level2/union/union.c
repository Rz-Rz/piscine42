#include <unistd.h>

void ft_putchar(char c)
{
		write(1, &c, 1);
}

void ft_union(char *s1, char *s2)
{
		int tab2[256] = {0};
		int tab1[256] = {0};
		int i;
		int j;

		i = 0;
		while (s2[i])
		{
				tab2[(int)s2[i]] = 1;
				i++;
		}
		while (s1[i] != '\0')
		{
				j = 0 + i;
				while (s2[j] != '\0')
				{
						if (s1[i] != s2[j] && tab2[(int)s1[i]] == 0)
						{
								ft_putchar(s1[i]);
								tab2[(int)s1[i]] = 1;
						}
						j++;
				}
				i++;
		}
		i = 0;
		while (s1[i])
		{
				tab1[(int)s1[i]] = 1;
				i++;
		}
}

int main(int ac, char **av)
{
		if (ac != 3)
		{
				ft_putchar('\n');
				return (0);
		}

		ft_union(av[1], av[2]);
}
