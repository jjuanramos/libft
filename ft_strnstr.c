/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:49:40 by juramos           #+#    #+#             */
/*   Updated: 2023/09/18 11:13:45 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, int len)
{
	int	h_pos;
	int	n_pos;
	int	needle_length;

	h_pos = 0;
	needle_length = ft_strlen(needle);
	if (needle_length == 0)
		return (haystack);
	while (h_pos < len && haystack[h_pos] != '\0')
	{
		n_pos = 0;
		while (haystack[h_pos + n_pos] == needle[n_pos]
			&& needle[n_pos] != '\0' && h_pos + n_pos < len)
			n_pos++;
		if (n_pos == needle_length)
			return (&haystack[h_pos]);
		h_pos++;
	}
	return (0);
}
