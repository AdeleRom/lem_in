/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 22:39:49 by shunt             #+#    #+#             */
/*   Updated: 2019/09/20 00:59:20 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_s(char *s)
{
	char	*r;

	if (s)
	{
		if (!(r = ft_strdup(s)))
			return (NULL);
	}
	else
	{
		if (!(r = (char *)malloc(sizeof(char) * 7)))
			return (NULL);
		r[0] = '(';
		r[1] = 'n';
		r[2] = 'u';
		r[3] = 'l';
		r[4] = 'l';
		r[5] = ')';
		r[6] = '\0';
	}
	return (r);
}
