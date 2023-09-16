/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:04:51 by juramos           #+#    #+#             */
/*   Updated: 2023/09/16 17:21:51 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char	*dst, char *src, int n)
{
	int	pos;

	pos = 0;
	if (n != 0)
	{
		while (src[pos] != '\0' && pos < n - 1)
		{
			dst[pos] = src[pos];
			pos++;
		}
		dst[pos] = '\0';
	}
	return (ft_strlen(src));
}
