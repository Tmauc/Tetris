/*
** EPITECH PROJECT, 2017
** game.c
** File description:
** game.c
*/

#include "my.h"

int game(files_t *fi)
{
	int ch;
	int i = 0;

	while ((ch = getch()) != fi->key.key_quit) {
		i++;
	}
	return (0);
}

int prog(files_t *fi)
{
	screen_setup();
	map_setup(fi);
	refresh();
	game(fi);
	return (0);
}
