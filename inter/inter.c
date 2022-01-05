/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:15:17 by aymoulou          #+#    #+#             */
/*   Updated: 2021/12/05 15:09:37 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_verif_char(char *str, char c, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int     main(int ac, char **av)
{
    int i;
    int j = 0;

    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            if (ft_verif_char(av[1], av[1][i], i) == 1)
            {
                j = 0;
                while(av[2][j])
                {
                    if (av[2][j] == av[1][i])
                    {
                        ft_putchar(av[1][i]);
                        break;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}