/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 18:39:13 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 19:03:32 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // for NULL

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		++s;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
