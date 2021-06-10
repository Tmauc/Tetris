/*
** EPITECH PROJECT, 2017
** help.c
** File description:
** help.c
*/

#include "my.h"

void help2()
{
	my_putstr(" -kd –key-drop={K}   DROP the tetrimino ");
	my_putstr("using the K key (def: down arrow)\n");
	my_putstr(" -kq –key-quit={K}   QUIT the game using ");
	my_putstr("the K key (def: ‘q’ key)\n");
	my_putstr(" -kp –key-pause={K}  PAUSE/RESTART the game ");
	my_putstr("using the K key (def: space bar)\n");
	my_putstr(" -map-size={row,col} Set the numbers of rows ");
	my_putstr("and columns of the map (def: 20,10)\n");
	my_putstr(" -w –without-next    Hide next tetrimino (def: false)\n");
	my_putstr(" -d –debug           Debug mode (def: false)\n");
}

void help()
{
	my_putstr("./tetris –help | cat -e\n");
	my_putstr("Usage: ./tetris [options]\n");
	my_putstr("Options:\n");
	my_putstr(" -help               Display this help\n");
	my_putstr(" -l –level={num}     Start Tetris at level num (def: 1)\n");
	my_putstr(" -kl –key-left={K}   Move the tetrimino LEFT using ");
	my_putstr("the K key (def: left arrow)\n");
	my_putstr(" -kr –key-right={K}  Move the tetrimino RIGHT using ");
	my_putstr("the K key (def: right arrow)\n");
	my_putstr(" -kt –key-turn={K}   TURN the tetrimino clockwise ");
	my_putstr("90d using the K key (def: toparrow)\n");
	help2();
}
