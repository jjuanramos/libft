/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:20:40 by juramos           #+#    #+#             */
/*   Updated: 2023/09/17 12:30:37 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	pos;

	pos = 0;
	if (n == 0)
		return (0);
	while (pos <= n)
	{
		if (s1[pos] != s2[pos] || s1[pos] == '\0'
			|| s2[pos] == '\0' || pos == n)
			return (s1[pos] - s2[pos]);
		pos++;
	}
	return (s1[pos] - s2[pos]);
}
