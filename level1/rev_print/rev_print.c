/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 17:09:25 by ndavid            #+#    #+#             */
/*   Updated: 2015/09/20 18:12:50 by ndavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
			i++;
	}
}

char		*rev_print(char *str)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 0;
	while (str[j] != '\0')
		j++;
	if (j)
		j--;
	while (i < j)
	{	
		x = str[j];
		str[j] = str[i];
		str[i] = x;
		i++; 
		j--;
	}	
	return (str);
}

int			main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_putstr(rev_print(argv[1]));
	return(0);
}
