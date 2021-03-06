/*
** EPITECH PROJECT, 2017
** bsq fill.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include "../include/my.h"

void sokoban(char *filepath)
{
	map_t *map;

	map = NULL;
	map = malloc(sizeof(map_t));
	copy_in_buffer(map, filepath);
	get_nbr_o(map);
	get_cols(map);
	check_map(map);
	copy_in_double(map);
	get_p(map);
	loop(map);
}

void loop(map_t *map)
{
	int key;

	initscr();
	noecho();
	keypad(stdscr, TRUE);
	refresh();
	while (1) {
		clear();
		for (int row = 0; row < map->row; row += 1)
			mvprintw(row, 0, "%s", map->map[row]);
		key = getch();
		if (key == -1)
			exit(84);
		key_event(map, key);
		refresh();
		check_if_o(map);
	}
	endwin();
}

void check_if_o(map_t *map)
{
	int row = 0;
	int i = 0;
	int col = 0;
	int columns = 0;
	int temp = 0;

	while (row != map->row) {
		columns = cols(map, temp);
		while (col != columns) {
			i = x_and_o(map, row, col, i);
			col++;
			temp++;
		}
		temp++;
		col = 0;
		row++;
	}
}

int x_and_o(map_t *map, int row, int col, int i)
{
	if (map->map[row][col] == 'X' && map->saved[row][col] == 'O')
		i++;
	if (i == map->o) {
		endwin();
		exit(0);
	}
	return (i);
}
