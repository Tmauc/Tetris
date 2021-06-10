/*
** EPITECH PROJECT, 2017
** arg.c
** File description:
** arg.c
*/

#include "my.h"

void case_k2(files_t *fi, char **av)
{
	if ((my_strcmp(optarg, "ey-drop=") == 0) ||
	(my_strcmp(optarg, "d") == 0))
		fi->key.key_drop = av[optind][0];
	if ((my_strcmp(optarg, "ey-quit=") == 0) ||
	(my_strcmp(optarg, "q") == 0))
		fi->key.key_quit = av[optind][0];
	if ((my_strcmp(optarg, "ey-pause=") == 0) ||
	(my_strcmp(optarg, "p") == 0))
		fi->key.key_pause = av[optind][0];
}

void case_k(files_t *fi, char **av)
{
	if ((my_strcmp(optarg, "ey-left=") == 0) ||
	(my_strcmp(optarg, "l") == 0))
		fi->key.key_left = av[optind][0];
	if ((my_strcmp(optarg, "ey-right=") == 0) ||
	(my_strcmp(optarg, "r") == 0))
		fi->key.key_right = av[optind][0];

	if ((my_strcmp(optarg, "ey-turn=") == 0) ||
	(my_strcmp(optarg, "t") == 0))
		fi->key.key_turn = av[optind][0];
	case_k2(fi, av);
}

void arg3(int option, char **av, files_t *fi)
{
	switch (option) {
	case 'd':
		if ((my_strcmp(optarg, "ebug") == 0) ||
		(av[optind] == NULL)) {
			fi->key.debug = av[optind];
		}
		break;
	case 'l':
		if (my_strcmp(optarg, "evel") == 0)
			fi->key.level = str_to_int(av[optind]);
		if (av[optind] == NULL)
			fi->key.level = str_to_int(optarg);
		break;
	default:
		break;
	}
}

void arg2(int option, char **av, files_t *fi)
{
	switch (option) {
		case 'k':
			case_k(fi, av);
			break;
		case 'm':
			if (my_strcmp(optarg, "ap-size=") == 0) {
				change_map(av, fi);
			}
			break;
		case 'w':
			if ((my_strcmp(optarg, "ithout-next") == 0) ||
			(av[optind] == NULL)) {
				fi->key.hidetetri = av[optind];
			}
			break;
		default:
			arg3(option, av, fi);
			break;
	}
}

void arg(int ac, char **av, files_t *fi)
{
	//char **str = create_tab();
	int option = 0;

	while ((option = getopt(ac, av,"-h:-m::-w:-l:-d:-k:")) != -1) {
		switch (option) {
			case 'h':
				if (my_strcmp(optarg, "elp") == 0)
					help();
				break;
			default:
				arg2(option, av, fi);
				break;
	        }
	}
}
