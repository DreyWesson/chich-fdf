/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:47:59 by conyejib          #+#    #+#             */
/*   Updated: 2023/08/08 12:37:47 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

static int	expose_handle(t_fdf *fdf);

int	main(int argc, char **argv)
{
	char	*file_name;
	t_fdf	**fdf;

	if (argc != 2)
		error(1);
	file_name = argv[1];
	init_fdf(file_name, fdf);
	render(*fdf);
	mlx_key_hook((*fdf)->win, &key_handle, *fdf); 
	mlx_expose_hook((*fdf)->win, &expose_handle, *fdf);
	mlx_loop((*fdf)->mlx);
}

static int	expose_handle(t_fdf *fdf)
{
	render(fdf);
	return (0);
}
