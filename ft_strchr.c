/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:32:49 by juramos           #+#    #+#             */
/*   Updated: 2023/09/18 10:17:18 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	int	pos;

	pos = 0;
	while (s[pos] != '\0')
	{
		if (s[pos] == c)
			return (&s[pos]);
		pos++;
	}
	if (s[pos] == c)
		return (&s[pos]);
	return (0);
}
