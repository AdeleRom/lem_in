/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_str.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 09:29:43 by shunt             #+#    #+#             */
/*   Updated: 2019/09/20 00:59:20 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		t_str(char *s, char **t)
{
	int		i;

	i = -1;
	while (s[++i] && s[i] != 'e' && s[i] != 'E')
		;
	if (!(*t = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	(*t)[i] = '\0';
	i = -1;
	while (s[++i] && s[i] != 'e' && s[i] != 'E')
		(*t)[i] = s[i];
	return (i);
}
