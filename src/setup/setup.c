/*
** EPITECH PROJECT, 2017
** setup.c
** File description:
** setup.c
*/

#include "my.h"
#define BUFF_SIZE 8070
//8058
void setup_key(files_t *fi)
{
	fi->key.key_left = 'D';
	fi->key.key_right = 'C';
	fi->key.key_turn = 'A';
	fi->key.key_drop = 'B';
	fi->key.key_pause = ' ';
	fi->key.key_quit = 'q';
	fi->key.width = 64;
	fi->key.height = 40;
	fi->start_x = 116 - (fi->key.width / 2);
	fi->start_y = 29 - (fi->key.height / 2) - 1;
	fi->key.debug = "false";
	fi->key.hidetetri = "false";
}

void print_first_end_bar(files_t *fi)
{
	int i = 2;
	int x = fi->start_x;
	int y = fi->start_y;

	mvprintw(y, x, "+");
	x++;
	while (i != fi->key.width) {
		mvprintw(y, x, "-");
		i++;
		x++;
	}
	mvprintw(y, x, "+");
}

void tetris_setup(files_t *fi)
{
	int i = 2;
	int j = 2;
	initscr();
	start_color();
	refresh();

	init_pair(3, COLOR_CYAN, COLOR_BLACK);
	attron(COLOR_PAIR(3));
	print_first_end_bar(fi);
	fi->start_y++;
	while (j != fi->key.height) {
		i = 2;
		mvprintw(fi->start_y, fi->start_x, "|");
		fi->start_x++;
		while (i != fi->key.width) {
			mvprintw(fi->start_y, fi->start_x, " ");
			i++;
			fi->start_x++;
		}
		mvprintw(fi->start_y, fi->start_x, "|");
		fi->start_x = 116 - (fi->key.width / 2);
		fi->start_y++;
		j++;
	}
	print_first_end_bar(fi);
}

void map_setup(files_t *fi)
{
	int file = open("map", O_RDONLY);
	char buff[BUFF_SIZE];
	int y = 0;
	int x = 0;

	while (read(file, buff, BUFF_SIZE)) {
		for (int i = 0; buff[i] != '\0'; i++) {
			if (buff[i] != '\n') {
				mvprintw(y, x, "%c", buff[i]);
				x++;
			} else {
				mvprintw(y, x, "%c", buff[i]);
				x = 0;
				y++;
			}
		}
	}
	tetris_setup(fi);
}
