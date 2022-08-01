/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:09:35 by f██████           #+#    #+#             */
/*   Updated: 2021/08/07 18:59:14 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_show_numbers(int a)
{
	write(1, &a, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	char numbers[n-1];
	char iterators[n-1];

	i = 0;
	while(i <= n) 
	{
		numbers[i-1] = '0' + 8 - n + i;
		iterators[i-1] = i + '0';
		i++;
	}

	i = 0;

	while(i <= n) 
	{
		numbers[i] = numbers[i-1];
		while(iterators[i] <= numbers[i])
		{
			ft_show_numbers( numbers[i] );
			iterators[i]++;
		}
		i++;
	}
}
