/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_warning.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:54:24 by khovakim          #+#    #+#             */
/*   Updated: 2024/10/25 17:44:28 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/t_bool.h"        // for t_bool
#include "include/ft_io_define.h"  // for WARNING, FD_STDERR
#include "include/color.h"         // for YELLOW, RESET

void	ft_putstr_fd(const char *msg, int fd);
void	ft_putendl_fd(const char *msg, int fd);

t_bool	ft_warning(const char *msg)
{
	ft_putstr_fd (PURPLE, FD_STDERR);
	ft_putstr_fd (WARNING, FD_STDERR);
	ft_putstr_fd (YELLOW, FD_STDERR);
	ft_putendl_fd (msg, FD_STDERR);
	ft_putstr_fd (RESET, FD_STDERR);
	return (FALSE);
}
