/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftbool.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:51:34 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 18:01:23 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTBOOL_H
# define LIBFTBOOL_H

# include "t_bool.h"  // t_bool

//
/// Checks if the passed character is a digit.
//
t_bool	ft_isdigit(int c);
//
/// Checks if the passed character is an alphabet.
//
t_bool	ft_isalpha(int c);
//
/// Checks if the passed character is an alphabet or a digit.
//
t_bool	ft_isalnum(int c);
//
/// Checks if the passed character is a whitespace character.
t_bool	ft_isspace(int c);
//
/// Checks if the passed character is a printable character.
t_bool	ft_isprintable(int c);
//
/// Checks if the passed number is a power of 2.
//
t_bool	ft_is_power_of_2(int n);

#endif // LIBFTBOOL_H