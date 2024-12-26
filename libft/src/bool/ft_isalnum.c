/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:39:57 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 17:41:21 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_bool.h"  // for t_bool

t_bool	ft_isalpha(int ch);
t_bool	ft_isdigit(int ch);

t_bool	ft_isalnum(int ch)
{
	if (ft_isalpha(ch) || ft_isdigit(ch))
		return (TRUE);
	return (FALSE);
}
