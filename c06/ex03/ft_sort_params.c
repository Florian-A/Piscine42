/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by f██████           #+#    #+#             */
/*   Updated: 2021/08/16 09:42:40 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	char			diff;
	unsigned char	*s1u;
	unsigned char	*s2u;

	s1u = (unsigned char *) s1;
	s2u = (unsigned char *) s2;
	i = 0;
	diff = 0;
	while (s1u[i] && s2u[i])
	{
		diff = s1u[i] - s2u[i];
		i++;
		if (diff != 0)
			return (diff);
	}
	diff = s1u[i] - s2u[i];
	return (diff);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strswap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc > 1)
	{	
		i = 0;
		while (i++, argv[i])
		{
			j = 1;
			while (j++, argv[j - 1])
				if (argv[j - 1] && argv[j]
					&& (ft_strcmp(argv[j - 1], argv[j]) < 0))
					ft_strswap(&argv[j - 1], &argv[j]);
		}
		i = 0;
		while (i++, argv[i - 1])
		{
			write(1, argv[i - 1], ft_strlen(argv[i - 1]));
			write(1, "\n", 1);
		}
	}
	return (0);
}
