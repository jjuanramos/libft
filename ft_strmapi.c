/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:11:44 by juramos           #+#    #+#             */
/*   Updated: 2023/10/02 11:37:56 by juramos          ###   ########.fr       */
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
/*
char	add_pos_to_char(unsigned int i, char c)
{
	return (c + i);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("The outcome of adding 1 int to each char of %s i %s.\n",
			argv[1], ft_strmapi(argv[1], &add_pos_to_char));
	}
}
*/
