/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 18:42:27 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 19:03:59 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // for NULL

char	*ft_strstr(const char *str1, const char *str2)
{
	int	i;
	int	j;

	if (!str1)
		return (NULL);
	if (!*str2)
		return ((char *)str1);
	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str1[i + j] && str2[j] && str1[i + j] == str2[j])
			++j;
		if (!str2[j])
			return ((char *)&str1[i]);
		++i;
	}
	return (NULL);
}
