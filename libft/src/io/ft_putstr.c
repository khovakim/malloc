/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:51:57 by khovakim          #+#    #+#             */
/*   Updated: 2024/10/25 17:53:48 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io_define.h"  // for FT_STDOUT

void	ft_putstr_fd(const char *str, int fd);

void	ft_putstr(const char *str)
{
	ft_putchar_fd(str, FD_STDOUT);
}
