/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** struct.h
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct key
{
	int width;
	int height;
	int level;
	char key_left;
	char key_right;
	char key_turn;
	char key_drop;
	char key_quit;
	char key_pause;
	char *debug;
	char *hidetetri;
} key;

typedef struct tetrimino
{
        char **shape;
        int size;
} tetrimino;

typedef struct files
{
	int start_x;
	int start_y;
	key key;
	tetrimino *teri;
} files_t;

#endif
