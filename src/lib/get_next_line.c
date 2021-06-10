/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** 
*/

#define READ_SIZE (256)
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int strrlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i = i + 1;
	return (i);
}


void my_bufclean(char (*buffer)[], int a, int z)
{
	int i = 0;
	
	while (i <= a) {
		(*buffer)[i] = 0;
		i = i + 1;
	}
	i = 0;
	while ((a + i) < z) {
		(*buffer)[i] = (*buffer)[a + i + 1];
		(*buffer)[a + i + 1] = 0;
		i = i + 1;
	}
}

static int my_linelen(char *str, char (*buffer)[], int n)
{
	int i = 0;

	while (i < n) {
		str[i] = (*buffer)[i];
		i = i + 1;
	}
	str[i] = '\0';
	return (i);
}

static char *my_lineclean(char (*buffer)[], int n)
{
	char *line = malloc(sizeof(char) * (n) + 1);

	if (line == NULL)
		return (NULL);
	my_linelen(line, buffer, n);
	my_bufclean(buffer, n, strrlen(*buffer));

	return (line);
}

char *get_next_line(int a)
{
	static char buffer[READ_SIZE];
	int i = 0;
	int n = 0;
	int size;

	n = (int)n;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i = i + 1;
	if (buffer[i] == '\n')
		return (my_lineclean(&buffer, i));
	size = i;
	while (size < READ_SIZE) {
		n = size;
		size = read(a, &buffer[i], READ_SIZE);
		i = 0;
		while (buffer[i] != '\0' && buffer[i] != '\n')
			i = i + 1;
		if (buffer[i] == '\n')
			return (my_lineclean(&buffer, i));
	}
	return (my_lineclean(&buffer, READ_SIZE));
}
