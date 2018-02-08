/*
** EPITECH PROJECT, 2017
** Piscine main.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include "../include/my.h"

int main(int argc, char **argv)
{
	if (argc == 2) {
		if (argv[1][0] == '-' && argv[1][1] == 'h') {
			helper();
			exit(0);
		}
		sokoban(argv[1]);
	} else {
		return (84);
	}
}
