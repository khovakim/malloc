/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:20:15 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 14:17:15 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_bool.h" // for t_bool

t_bool	ft_warning(const char *msg);
void	ft_putchar_fd(const char *str, int fd);

void	ft_putnbr_fd(int nbr, int fd)
{
	long int	number;

	if (0 >= fd)
	{
		ft_warning ("Invalid file descriptor.");
		return ;
	}
	number = nbr;
	if (0 > number)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	if (9 < number)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}
