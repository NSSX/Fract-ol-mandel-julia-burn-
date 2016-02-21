/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 15:47:51 by avella            #+#    #+#             */
/*   Updated: 2016/02/21 15:49:04 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		error_arg(void)
{
	ft_putstr("Choix de Fractale : /fractol\n");
	ft_putstr("                             Julia\n");
	ft_putstr("                             Mandel\n");
	ft_putstr("                             Burning\n");
	exit(1);
}

void		my_pixel_put_to_image(t_img *myimg, int x, int y, int color)
{
	myimg->data = mlx_get_data_addr(myimg->img_ptr,
			&myimg->bpp, &myimg->sizeline, &myimg->endian);
	myimg->data[y * myimg->sizeline + x * myimg->bpp / 8] = color % 256;
	color /= 256;
	myimg->data[y * myimg->sizeline + x * myimg->bpp / 8 + 1] = color % 256;
	color /= 256;
	myimg->data[y * myimg->sizeline + x * myimg->bpp / 8 + 2] = color % 256;
}
