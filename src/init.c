/*
** EPITECH PROJECT, 2018
** init.c
** File description:
** init.c
*/

#include "my.h"
#include "struct.h"

void init_values(files *fi)
{
	struct stat st;
	
	fi->nb_tetrimino = 7;
	fi->teri = malloc(sizeof(tetrimino) * (fi->nb_tetrimino + 1));
	fi->teri[0].shape = read_buffer("4.tetrimino");
	fi->teri[0].shape = read_buffer("5.tetrimino");
	fi->teri[0].shape = read_buffer("6.tetrimino");
	fi->teri[0].shape = read_buffer("7.tetrimino");
	fi->teri[0].shape = read_buffer("bar.tetrimino");
	fi->teri[0].shape = read_buffer("injverted-L.tetrimino");
	fi->teri[0].shape = read_buffer("square.tetrimino");
}
