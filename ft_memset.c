/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:19:23 by juramos           #+#    #+#             */
/*   Updated: 2023/09/18 11:28:12 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	void	*ret;

	ret = b;
	while (len--)
	{
		*(char *)b++ = (unsigned char)c;
	}
	return (ret);
}
