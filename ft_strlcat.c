/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:30:02 by juramos           #+#    #+#             */
/*   Updated: 2023/09/16 17:57:31 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char	*dst, char *src, int n)
{
	int	pos;
	int	len;

	pos = 0;
	while (dst[pos] != '\0' && pos < n)
		pos++;
	len = ft_strlcpy(&dst[pos], src, n - pos);
	return (len + pos);
}
