/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:59:03 by juramos           #+#    #+#             */
/*   Updated: 2023/09/18 10:16:49 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, int c)
{
	int	pos;
	int	loc;

	pos = 0;
	loc = 0;
	if (s[0] == c)
		return (&s[0]);
	while (s[pos] != '\0')
	{
		if (s[pos] == c)
			loc = pos;
		pos++;
	}
	if (s[pos] == c)
		return (&s[pos]);
	else if (loc == 0)
		return (0);
	else
		return (&s[loc]);
}
