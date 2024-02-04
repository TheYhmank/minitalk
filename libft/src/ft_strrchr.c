/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:33:11 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/31 14:54:30 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*res;

	res = s + ft_strlen(s);
	while (res >= s && *res != (char)c)
		res--;
	if (res >= s)
		return ((char *)res);
	else
		return (NULL);
}
