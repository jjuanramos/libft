/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:11:10 by juramos           #+#    #+#             */
/*   Updated: 2023/09/25 14:16:05 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*val;
	int		len;

	len = 0;
	if (!lst)
		return (0);
	if (!lst->next)
		return (1);
	val = lst->next;
	while (val->next)
	{
		val = val->next;
		len++;
	}
	return (len);
}
