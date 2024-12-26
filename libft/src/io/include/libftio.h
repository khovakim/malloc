/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftio.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:45:00 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 14:39:41 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTIO_H
# define LIBFTIO_H

//
/// Functions to output character.
//
void	ft_putchar(char ch);
void	ft_putchar_fd(char ch, int fd);
//
/// Functions to output string.
//
void	ft_putstr(const char *str);
void	ft_putstr_fd(const char *str, int fd);
//
/// Functions to output strings that will end with '\n'.
//
void	ft_putendl(const char *str);
void	ft_putendl_fd(const char *str, int fd);
//
/// Functions to output number.
//
void	ft_putnbr(int nbr);
void	ft_putnbr_fd(int nbr, int fd);
//
/// Functions to describe the incorrect flow of code.
///
/// Be sure that memory is freed before using the <ft_error> function,
/// because it exits the program with the exit(int) function.
//
void	ft_error(const char *msg);
void	ft_warning(const char *msg);

#endif // LIBFTIO_H