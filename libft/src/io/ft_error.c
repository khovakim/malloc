/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:22:28 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 14:30:07 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>                // for exit

#include "color.h"                 // for PURPLE, RED, RESET

#include "include/ft_io_define.h"  // for FT_ERROR, FD_STDERR

void	ft_putstr_fd(const char *msg, int fd);
void	ft_putendl_fd(const char *msg, int fd);

void	ft_warning(const char *msg)
{
	ft_putstr_fd (RED, FD_STDERR);
	ft_putstr_fd (FT_ERROR, FD_STDERR);
	ft_putstr_fd (RED, FD_STDERR);
	ft_putendl_fd (msg, FD_STDERR);
	ft_putstr_fd (RESET, FD_STDERR);
	exit(1);
}
