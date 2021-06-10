/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include <utime.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include "struct.h"

int main(int ac, char **av);

char *get_next_line(int a);
int my_strcmp(char const *s1, char const *s2);
void check_ac(int ac, char **av);
void my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char const *str);
char *read_buffer(char *av_1);

char **create_tab();
void arg(int ac, char **av);

void help();
int prog();

int screen_setup();
void map_setup(files_t *fi);

void setup_key(files_t *fi);

int check_tetrimino(char *name);

void init_values(files *fi);

#endif
