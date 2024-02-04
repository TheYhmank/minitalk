/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:42:16 by ayermeko          #+#    #+#             */
/*   Updated: 2023/10/26 14:20:48 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*altdest;
	const unsigned char	*altsrc;

	altdest = (unsigned char *)dest;
	altsrc = (const unsigned char *)src;
	while (n)
	{
		*altdest = *altsrc;
		altdest++;
		altsrc++;
		n--;
	}
	return (dest);
}
