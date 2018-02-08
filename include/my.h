/*
** EPITECH PROJECT, 2017
** Piscine my.h
** File description:
** Courthias Hugo <hcourthias>
*/


#ifndef MY_H_
	#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <ncurses.h>
#include <string.h>
#include "map.h"

int my_strlen(char const *str);
int my_put_nbr(int nb);
void my_putstr(char const *str);
void my_putchar(char c);
int my_getnbr(char const *str);
void bsq(char *filepath);
void copy_in_double(map_t *map);
void copy_in_buffer(map_t *map, char* filepath);
void loop(map_t *map);
int get_lines(map_t *map);
void get_cols(map_t *map);
void get_o(map_t *map);
void get_nbr_o(map_t *map);
void check_if_p(map_t *map, int col, int row);
int detect_square(map_t *map, int x, int y, int size);
void detect_biggest_square(map_t *map);
void check_if_o(map_t *map);
int fill_tab_int(map_t *map, int i, int col, int row);
void size_1(int x, int y, map_t *map);
void helper(void);
int x_and_o(map_t *map, int row, int col, int i);
int cols(map_t *map, int temp);
void sokoban(char *filepath);
void key_event(map_t *map, int key);
int move_right(map_t *map);
int move_left(map_t *map);
int move_down(map_t *map);
int move_up(map_t *map);
void check_map(map_t *map);
void get_p(map_t *map);

#endif
