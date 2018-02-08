/*
** EPITECH PROJECT, 2017
** bsq fill.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include "../include/my.h"

void key_event(map_t *map, int key)
{
	if (key == 27) {
		endwin();
		exit(1);
	}
	if (key == KEY_UP && map->map[map->posy - 1][map->posx] != '#')
		move_up(map);
	if (key == KEY_DOWN && map->map[map->posy + 1][map->posx] != '#')
		move_down(map);
	if (key == KEY_LEFT && map->map[map->posy][map->posx - 1] != '#')
		move_left(map);
	if (key == KEY_RIGHT && map->map[map->posy][map->posx + 1] != '#')
		move_right(map);
}
