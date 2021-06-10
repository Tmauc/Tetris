/*
** EPITECH PROJECT, 2017
** create_tab.c
** File description:
** create_tab.c
*/

#include "my.h"

char **malloc_tab()
{
	int i = 0;
	char **str;

	str = malloc(sizeof(char*) * 21);
	while (i != 21) {
		str[i] = malloc(sizeof(char) * 20);
		i++;
	}
	return (str);
}

char **create_tab2(char **str)
{
	str[11] = "-kq\0";
	str[12] = "-key-quit=\0";
	str[13] = "-kp \0";
	str[14] = "-key-pause=\0";
	str[15] = "-map-size=\0";
	str[16] = "-w\0";
	str[17] = "-without-next\0";
	str[18] = "-d\0";
	str[19] = "-debug\0";
	str[20] = NULL;
	return (str);
}

char **create_tab()
{
	char **str = malloc_tab();

	str[0] = "-help\0";
	str[1] = "-l\0";
	str[2] = "-level=\0";
	str[3] = "-kl\0";
	str[4] = "-key-left=\0";
	str[5] = "-kr\0";
	str[6] = "-key-right=\0";
	str[7] = "-kt\0";
	str[8] = "-key-turn=\0";
	str[9] = "-kd\0";
	str[10] = "-key-drop=\0";
	str = create_tab2(str);
	return (str);
}
