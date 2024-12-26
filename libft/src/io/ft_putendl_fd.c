/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:18:14 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 14:17:37 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // for write

#include "t_bool.h" // for t_bool

t_bool	ft_warning(const char *msg);
size_t	ft_strlen(const char *str);

void	ft_putendl_fd(const char *str, int fd)
{
	if (0 >= fd)
	{
		ft_warning ("Invalid file descriptor.");
		return ;
	}
	write (fd, str, ft_strlen(str));
	write (fd, "\n", 1);
}
