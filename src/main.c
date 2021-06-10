/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main.c
*/

#include "my.h"

void init_all_color()
{
	initscr();
	start_color();

	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
	init_pair(2, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_YELLOW, COLOR_BLACK);
	init_pair(5, COLOR_BLUE, COLOR_BLACK);
	init_pair(6, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(7, COLOR_CYAN, COLOR_BLACK);
	init_pair(8, COLOR_WHITE, COLOR_BLACK);
}

void print_text()
{
	attron(COLOR_PAIR(1));
	printw("BLACK\n");
	attron(COLOR_PAIR(2));
	printw("RED\n");
	attron(COLOR_PAIR(3));
	printw("GREEN\n");
	attron(COLOR_PAIR(4));
	printw("YELLOW\n");
	attron(COLOR_PAIR(5));
	printw("BLUE\n");
	attron(COLOR_PAIR(6));
	printw("MANGENTA\n");
	attron(COLOR_PAIR(7));
	printw("CYAN\n");
	attron(COLOR_PAIR(8));
	printw("WHITE\n");
}

int main(int ac, char **av)
{
	int i = check_tetrimino("tetriminos/5.tetrimino");
	printf("%i\n",i);
	check_ac(ac, av);
	if (ac == 10) {
		init_all_color();
		print_text();
	}
	refresh();
	getch();
	endwin();
	return (0);
}
