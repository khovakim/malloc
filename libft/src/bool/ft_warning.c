/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_warning.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:54:24 by khovakim          #+#    #+#             */
/*   Updated: 2024/10/11 19:40:31 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/t_bool.h" // for t_bool
#include "include/color.h"  // for YELLOW

#define WARNIND "Warning: "
#define FD_STDERR 2

void	ft_putstr_fd(const char *msg, int fd);
void	ft_putendl_fd(const char *msg, int fd);

t_bool	ft_warning(const char *msg)
{
	ft_putstr_fd (PURPLE, FD_STDERR);
	ft_putstr_fd (WARNIND, FD_STDERR);
	ft_putstr_fd (YELLOW, FD_STDERR);
	ft_putendl_fd (msg, FD_STDERR);
	ft_putstr_fd (RESET, FD_STDERR);
	return (FALSE);
}
