/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_two.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <yperra-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:50:44 by idunaver          #+#    #+#             */
/*   Updated: 2019/02/18 18:14:12 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_help_count(t_count_extra *count)
{
	int x;
	int y;

	if (count->height1 >= count->width1)
		x = count->height1;
	else
		x = count->width1;
	if (count->height1 >= count->width1)
		y = count->height2;
	else
		y = count->width2;
	if (x >= y)
		return (x);
	return (y);
}