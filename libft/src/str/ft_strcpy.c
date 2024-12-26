/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:26:59 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 19:35:13 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char	*ret;

	if (!dst || !src)
		return (dst);
	ret = dst;
	while (*src)
	{
		*dst = *src;
		++dst;
		++src;
	}
	*dst = '\0';
	return (ret);
}
