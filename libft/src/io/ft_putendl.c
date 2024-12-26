/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:54:55 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 13:11:42 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_io_define.h"  // for FT_STDOUT

void	ft_putendl_fd(const char *str, int fd);

void	ft_putendl(const char *str)
{
	ft_putendl_fd(str, FD_STDOUT);
}
