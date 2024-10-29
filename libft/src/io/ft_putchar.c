/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:30:43 by khovakim          #+#    #+#             */
/*   Updated: 2024/10/25 17:50:32 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io_define.h"  // for FT_STDOUT

void	ft_putchar_fd(char ch, int fd);

void	ft_putchar(char ch)
{
	ft_putchar_fd(ch, FD_STDOUT);
}
