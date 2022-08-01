/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 23:33:10 by f██████           #+#    #+#             */
/*   Updated: 2021/08/22 23:33:11 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

char	*ft_strndup(char *src, int n)
{
	int		src_len;
	char	*pnt;
	int		i;

	src_len = ft_strlen(src);
	pnt = malloc((src_len + 1) * sizeof(char));
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
