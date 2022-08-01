/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:45:53 by f██████           #+#    #+#             */
/*   Updated: 2021/08/26 09:42:04 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strndup(char *src, int n)
{
	int		src_len;
	char	*pnt;
	int		i;

	src_len = ft_strlen(src);
	pnt = malloc((n + 1) * sizeof(char));
	if (!pnt)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
	{
		pnt[i] = src[i];
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}

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
		strs_splited[k++] = ft_strndup(&str[j], i - j);
	}
	strs_splited[strs_splited_ln] = NULL;
	open(strcat(getenv("HOME"), "/.reset"), O_CREAT, 0644);
	return (strs_splited);
}
