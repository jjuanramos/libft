/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:11:44 by juramos           #+#    #+#             */
/*   Updated: 2023/10/02 12:29:49 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		pos;

	ret = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ret)
	{
		free(ret);
		return (0);
	}
	pos = 0;
	while (s[pos] != '\0')
	{
		ret[pos] = (*f)(pos, s[pos]);
		pos++;
	}
	ret[pos] = '\0';
	return (ret);
}

char	add_pos_to_char(unsigned int i, char c)
{
	if (ft_isalpha(c) && i >= 0)
		return (c);
	return (c);
}
/*
int	main(int argc, char **argv)
{
	char	*s;

	if (argc == 2 && argv[1])
	{
		printf("%s.\n", ft_strmapi(s, &add_pos_to_char));
	}
}
*/
