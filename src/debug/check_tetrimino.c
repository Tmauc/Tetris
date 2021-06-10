/*
** EPITECH PROJECT, 2018
** check_tetrimino.c
** File description:
** check_tetrimino.c
*/

#include "my.h"

int my_str_isnum(char const *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] < '0' && str[i] > '9')
			return (1);
	}

	return (0);
}

char *read_buffer(char *av_1)
{
	struct stat st;
	char *str;
	int fd;
	int size_file;
	
	stat(av_1, &st);
	size_file = st.st_size;
	str = malloc(sizeof(char) * (size_file + 100));
	fd = open(av_1, O_RDONLY);
	read(fd, str, size_file);
	str[size_file] = '\0';
	close(fd);
	return (str);
}

int check_tetrimino(char *name)
{
	char *str = read_buffer(name);
	int len = my_strlen(str);

	printf("%s\n",str);
	if (len != 3)
		return (1);
	else if (my_str_isnum(str) == 1)
		return (1);
	else
		return (0);
}
