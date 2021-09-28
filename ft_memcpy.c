/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:01:50 by kamin             #+#    #+#             */
/*   Updated: 2021/09/28 12:36:08 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const char	*source;
	char		*destination;

	source = src;
	destination = dst;
	while (n-- > 0)
	{
		*destination = *source;
		destination++;
		source++;
	}
	return (dst);
}
