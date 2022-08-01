/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/18 19:24:28 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	convert_to_base(unsigned int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	div;
	unsigned int	mod;

	base_len = ft_strlen(base);
	if (nbr > base_len - 1)
	{
		div = nbr / base_len;
		mod = nbr % base_len;
		convert_to_base(div, base);
	}
	if (nbr > base_len - 1)
		ft_putchar(base[mod]);
	else
		ft_putchar(base[nbr]);
}

int	is_error(char *base)
{
	int		i;
	int		j;
	char	uniq_base[172];

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	j = 0;
	while (base[i])
	{
		j = 0;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (uniq_base[j])
		{
			if (base[i] == uniq_base[j])
				break ;
			j++;
		}
		uniq_base[j] = base[i];
		i++;
		j++;
	}
	if (ft_strlen(base) == ft_strlen(uniq_base))
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (is_error(base))
		return ;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	convert_to_base(nbr, base);
	return ;
}
