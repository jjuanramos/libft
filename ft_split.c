/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:21:01 by juramos           #+#    #+#             */
/*   Updated: 2023/10/02 18:01:48 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number_of_slices(char const *s, char c)
{
	int	pos;
	int	ret;

	ret = 0;
	pos = 0;
	while (s[pos] != '\0')
	{
		if (s[pos] != c)
		{
			ret++;
			while (s[pos] != c && s[pos] != '\0')
				pos++;
		}
		else
			pos++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		ret_slice;
	int		start;
	char	**ret;

	if (!s)
		return (0);
	ret = malloc((get_number_of_slices(s, c) + 1) * sizeof(char *));
	if (!ret)
		return (0);
	ret_slice = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = 0;
			while (*s != c && *s && ++start)
				s++;
			ret[ret_slice++] = ft_substr(s - start, 0, start);
		}
		else
			s++;
	}
	ret[ret_slice] = 0;
	return (ret);
}
/*
void	print_splitted(char	**ss)
{
	int	pos;

	pos = 0;
	while (ss[pos] != '\0')
	{
		printf("%s", ss[pos]);
		pos++;
		if (ss[pos] != '\0')
			printf(", ");
	}
	printf(".\n");
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("The output of %s splitted by %c is: ",
			argv[1], argv[2][0]);
		print_splitted(ft_split(argv[1], argv[2][0]));
	}
	return (0);
}
*/
