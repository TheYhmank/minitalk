/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:49:19 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/31 14:32:05 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*res;

	res = s;
	while (*res)
	{
		if (*res == (char)c)
			return ((char *)res);
		res++;
	}
	if (c == '\0')
		return ((char *)res);
	return (NULL);
}
