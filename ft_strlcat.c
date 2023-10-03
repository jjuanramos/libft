/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:30:02 by juramos           #+#    #+#             */
/*   Updated: 2023/10/03 11:54:03 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t n)
{
	size_t	pos;
	size_t	len;

	if (n == 0)
		return (0);
	pos = 0;
	while (dst[pos] != '\0' && pos < n)
		pos++;
	len = ft_strlcpy(&dst[pos], src, n - pos);
	return (len + pos);
}
