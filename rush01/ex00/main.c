/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a███████ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:14:48 by a███████          #+#    #+#             */
/*   Updated: 2021/08/15 20:15:55 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int	main(int	argc, char	*argv[])
{
	int	error;
	int	**arr;

	if (argc == 2)
	{
		error = ft_error_strlen(argv[1]);
		if (error)
			return (1);
		error = ft_error_char(argv[1]);
		if (error)
			return (1);
		arr = cr_tow_dim_array(6, 6);
		fill_array_entries(argv[1], arr);
		print_debug(arr);
		return (0);
	}
	else
	{
		write(1, "ERROR\n", 6);
		return (1);
	}
}
