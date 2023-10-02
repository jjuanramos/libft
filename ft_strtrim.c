/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:04:21 by juramos           #+#    #+#             */
/*   Updated: 2023/10/02 13:48:11 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1)
		return (0);
	start = 0;
	while (ft_strchr(set, s1[start]) != 0)
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[end]) != 0)
		end--;
	trimmed = ft_substr(s1, start, end + 1 - start);
	if (!trimmed)
	{
		free(trimmed);
		return (0);
	}
	return (trimmed);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("ft_strtrim for %s, trimming %s is %s.\n",
			argv[1], argv[2], ft_strtrim(argv[1], argv[2]));
	}
}
*/
