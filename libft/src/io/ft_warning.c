/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_warning.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:54:24 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 14:26:34 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"                 // for PURPLE, YELLOW, RESET

#include "include/ft_io_define.h"  // for FT_WARNING, FD_STDERR

void	ft_putstr_fd(const char *msg, int fd);
void	ft_putendl_fd(const char *msg, int fd);

void	ft_warning(const char *msg)
{
	ft_putstr_fd (PURPLE, FD_STDERR);
	ft_putstr_fd (FT_WARNING, FD_STDERR);
	ft_putstr_fd (YELLOW, FD_STDERR);
	ft_putendl_fd (msg, FD_STDERR);
	ft_putstr_fd (RESET, FD_STDERR);
}
