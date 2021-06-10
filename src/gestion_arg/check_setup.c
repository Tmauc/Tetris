/*
** EPITECH PROJECT, 2017
** check_setup.c
** File description:
** check_setup.c
*/

#include "my.h"

void change_map(char **av, files_t *fi)
{
	fi->key.height = str_to_int(av[optind]);
	fi->key.width = str_to_int(av[optind + 1]);
	fi->start_x = 116 - (fi->key.width / 2);
	fi->start_y = 29 - (fi->key.height / 2) - 1;
}

int screen_setup()
{
	WINDOW *window = initscr();
	noecho();
	curs_set(0);
	nodelay(window, true);
	refresh();
	return (1);
}

void check_ac(int ac, char **av)
{
	files_t fi;

	init_values(&fi);
	setup_key(&fi);
	if (ac == 1) {
		prog(&fi);
	} else if (ac > 1) {
		arg(ac, av, &fi);
		prog(&fi);
	}
}
