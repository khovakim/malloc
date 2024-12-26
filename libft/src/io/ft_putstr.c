/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:51:57 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 13:11:28 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_io_define.h"  // for FT_STDOUT

void	ft_putstr_fd(const char *str, int fd);

void	ft_putstr(const char *str)
{
	ft_putstr_fd(str, FD_STDOUT);
}
