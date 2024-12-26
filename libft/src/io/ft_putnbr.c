/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:10:33 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 13:13:57 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_io_define.h"  // for FT_STDOUT

void	ft_putnbr_fd(int nbr, int fd);

void	ft_putnbr(int nbr)
{
	ft_putnbr_fd(nbr, FT_STDOUT);
}
