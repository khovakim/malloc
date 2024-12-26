/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:43:29 by khovakim          #+#    #+#             */
/*   Updated: 2024/12/26 15:45:38 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_bool.h"  // for t_bool

t_bool	ft_isdigit(int ch)
{
	if ('0' <= ch && '9' >= ch)
		return (TRUE);
	return (FALSE);
}