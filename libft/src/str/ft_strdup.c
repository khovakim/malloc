/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 18:55:11 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 19:05:05 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // for NULL
#include <stdlib.h>  // for malloc, ssize_t

ssize_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}
