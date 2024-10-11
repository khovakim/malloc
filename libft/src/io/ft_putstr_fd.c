/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:17:55 by khovakim          #+#    #+#             */
/*   Updated: 2024/10/11 19:37:03 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // for write

#include "include/t_bool.h" // for t_bool

t_bool	ft_warning(const char *msg);
size_t	ft_strlen(const char *str);

void	ft_putstr_fd(const char *str, int fd)
{
	if (fd <= 0)
	{
		ft_warning ("Invalid file descriptor.");
		return ;
	}
	write (fd, str, ft_strlen(str));
}
