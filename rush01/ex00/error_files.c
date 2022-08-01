/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m███████ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:15:45 by m███████          #+#    #+#             */
/*   Updated: 2021/08/15 20:37:54 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_error_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i != 31)
	{
		write(1, "ERROR\n", 6);
		return (1);
	}
	return (0);
}

int	ft_error_char(char	*str)
{
	int	i;

	i = 0;
	while (i <= 28)
	{
		if ((str[i] >= '1' && str[i] <= '4') && (str[i + 1] == ' '))
			i += 2;
		else
		{
			write(1, "CRROR\n", 6);
			return (1);
		}
	}
	i = 30;
	if (!(str[i] >= '1' && str[i] <= '4') && str[i + 1] == '\0')
	{
		write(1, "ERROR\n", 6);
		return (1);
	}
	return (0);
}
