/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:20:40 by juramos           #+#    #+#             */
/*   Updated: 2023/09/17 16:21:05 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	pos;

	pos = 0;
	if (n == 0)
		return (0);
	while (pos < n)
	{
		if (s1[pos] != s2[pos] || pos == n - 1)
			return (s1[pos] - s2[pos]);
		pos++;
	}
	return (s1[pos - 1] - s2[pos - 1]);
}
