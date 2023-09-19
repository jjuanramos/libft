/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:05:07 by juramos           #+#    #+#             */
/*   Updated: 2023/09/19 13:18:40 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		pos;
	int		helper;

	pos = 0;
	helper = 0;
	if (!s1 && !s2)
		return (0);
	s3 = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s3)
	{
		free(s3);
		return (0);
	}
	while (s1[helper] != '\0')
		s3[pos++] = s1[helper++];
	helper = 0;
	while (s2[helper] != '\0')
		s3[pos++] = s2[helper++];
	s3[pos] = '\0';
	return (s3);
}
