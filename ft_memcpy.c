/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:36:31 by juramos           #+#    #+#             */
/*   Updated: 2023/09/18 11:52:05 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, void *src, int n)
{
	void	*ret;

	ret = dst;
	if (!dst && !src)
		return (0);
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (ret);
}
