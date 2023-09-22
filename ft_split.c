/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:21:01 by juramos           #+#    #+#             */
/*   Updated: 2023/09/22 17:27:21 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	locate_char(char const *s, char c)
{
	int	loc;

	loc = 0;
	while (s[loc] != '\0')
	{
		if (s[loc] == c)
			return (loc);
		loc++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		slices;
	int		pos;
	int		i;
	char	**ret;

	slices = 0;
	pos = 0;
	while (s[pos] != '\0')
	{
		if (s[pos++] == c)
			slices++;
	}
	ret = malloc((slices + 2) * sizeof(char *));
	if (!ret)
	{
		free(ret);
		return (0);
	}
	pos = 0;
	i = 0;
	while (s[pos] != '\0')
	{
		if (s[pos] == c)
			ret[i++] = ft_substr(s, pos + 1, locate_char(&s[pos + 1], c));
		pos++;
	}
	ret[i] = 0;
	return (ret);
}
