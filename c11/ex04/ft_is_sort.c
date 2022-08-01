/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/26 19:05:34 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	desc;
	int	insc;
	int	equal;

	i = 0;
	desc = 0;
	insc = 0;
	equal = 0;
	if (length < 2)
		return (1);
	while (i < length)
	{
		if ((*f)(tab[i - 1], tab[i]) > 0)
			desc++;
		if ((*f)(tab[i - 1], tab[i]) < 0)
			insc++;
		if ((*f)(tab[i - 1], tab[i]) == 0)
			equal++;
		i++;
	}
	if ((desc == length - 1) || (insc == length - 1) || (equal == length - 1))
		return (0);
	else
		return (1);
}
