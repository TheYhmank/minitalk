/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:58:06 by ayermeko          #+#    #+#             */
/*   Updated: 2023/11/05 12:30:01 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new;
	int		total_bytes;

	if (!nmemb || !size)
		return (malloc(0));
	total_bytes = nmemb * size;
	if (total_bytes / size != nmemb)
		return (NULL);
	new = malloc(size * nmemb);
	if (!new)
		return (NULL);
	ft_bzero(new, nmemb * size);
	return (new);
}
// u