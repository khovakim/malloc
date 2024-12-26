/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:01:03 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 19:30:26 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // for ssize_t

ssize_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dst, const char *src);

char	*ft_strcat(char *dst, const char *src)
{
	if (!dst || !src)
		return (dst);
	ft_strcpy(dst + ft_strlen(dst), src);
	return (dst);
}
