/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:06:48 by khovakim          #+#    #+#             */
/*   Updated: 2024/10/11 19:37:13 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // for write

#include "include/t_bool.h" // for t_bool

t_bool	ft_warning(const char *msg);

void	ft_putchar_fd(char smb, int fd)
{
	if (fd <= 0)
	{
		ft_warning ("Invalid file descriptor.");
		return ;
	}
	write (fd, &smb, 1);
}
