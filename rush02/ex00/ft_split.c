/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:45:53 by f██████           #+#    #+#             */
/*   Updated: 2021/08/24 10:55:49 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

int	is_delimiter(char c, char *del)
{
	int	i;

	i = 0;
	while (del[i])
	{
		if (c == del[i])
			return (1);
		i++;
	}
	return (0);
}

int	splited_arr_len(char *str, char *charset)
{
	int		i;
	int		strs_splited_ln;

	i = 0;
	strs_splited_ln = 0;
	if (!is_delimiter(str[0], charset) && str[0] != '\0')
		strs_splited_ln++;
	// is_delimiter(str[15], charset);
	while (str[i])
	{
		if ((is_delimiter(str[i], charset) && !is_delimiter(str[i + 1], charset)
				&& str[i + 1] != '\0' ))
			strs_splited_ln++;
		i++;
	}
	return (strs_splited_ln);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	int		strs_splited_ln;
	char	**strs_splited;

	strs_splited_ln = splited_arr_len(str, charset);
	strs_splited = malloc((strs_splited_ln + 1) * sizeof(char *));
	if (!strs_splited)
		return (NULL);
	j = 0;
	i = 0;
	k = 0;
	while (str[i])
	{
		while (is_delimiter(str[i], charset))
			i++;
		j = i;
		while (!is_delimiter(str[i], charset) && str[i] != '\0' )
			i++;
		strs_splited[k] = ft_strndup(&str[j], i - j);
		k++;
	}
	strs_splited[strs_splited_ln] = NULL;
	return (strs_splited);
}
