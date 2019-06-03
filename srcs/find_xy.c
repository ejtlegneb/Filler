/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_xy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vmulder <vmulder@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 16:02:33 by vmulder        #+#    #+#                */
/*   Updated: 2019/06/03 18:44:08 by vmulder       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/filler.h"

void		ft_findmidfield(t_fillstr *vl)
{
	vl->midfield[0] = vl->fieldw / 2;
	vl->midfield[1] = vl->fieldl / 2;

	ft_printf("midfield: x=%d y=%d\n", vl->midfield[0], vl->midfield[1]);
}

void		ft_findcoor_xo(t_fillstr *vl)
{
	int i;
	int d;

	i = 0;
	d = 0;
	while (i < vl->fieldl)
	{
		while (d < vl->fieldw + 4)
		{
			if (vl->field[i][d] == 'O')
			{
				vl->o[0] = d;
				vl->o[1] = i;
			}
			if (vl->field[i][d] == 'X')
			{
				vl->x[0] = d;
				vl->x[1] = i;
			}
			d++;
		}
		d = 0;
		i++;
	}
	ft_printf("\nX: x=%d y=%d\n", vl->x[0], vl->x[1]);
	ft_printf("O: x=%d y=%d\n", vl->o[0], vl->o[1]);
}

void		ft_findcoor(t_fillstr *vl)
{
	ft_findcoor_xo(vl);
	ft_findmidfield(vl);
}