/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:27:47 by juramos           #+#    #+#             */
/*   Updated: 2023/09/17 12:05:51 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strlcpy(char *dst, char *src, int n);
int		ft_strlcat(char *dst, char *src, int n);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);

#endif
