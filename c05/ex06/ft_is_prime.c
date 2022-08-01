/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:45:53 by f██████           #+#    #+#             */
/*   Updated: 2021/08/17 12:30:58 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrt_rnd(int nb)
{
	int	i;
	int	j;
	int	nb_ret;

	i = 0;
	j = 1;
	nb_ret = 0;
	if (nb < 0)
		return (0);
	while (j <= nb && i < 46340)
	{
		i++;
		j = i * i;
	}
	nb_ret = (i - 1);
	return (nb_ret);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt_nb_rnd;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 5)
		return (1);
	if (nb % 2 == 0 || nb % 5 == 0)
		return (0);
	else
	{
		i = 3;
		sqrt_nb_rnd = sqrt_rnd(nb) + 1;
		while (i < sqrt_nb_rnd)
		{
			if (nb % i == 0)
				return (0);
			i = i + 1;
		}
		return (1);
	}
}
