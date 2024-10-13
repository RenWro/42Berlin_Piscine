/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:40:53 by rwrobles          #+#    #+#             */
/*   Updated: 2024/10/13 23:02:54 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# define N 4

void	error_detector(int *array);
int		check_length(char *argv[], int *array);
int		check_spacing(char *argv[], int *array);
int		check_number(char *argv[], int *array);
int		*atoi_modified(char *argv[], int *pointer);

int		check_views(int grid[4][4], int *hints);
void	print_grid(int grid [4][4]);
void	fill_hints(int *hints, int arr[4][4]);
void	solve(int arr[4][4]);
void	init_grid(int arr[4][4], int grid[4][4]);
int		check_views(int grid[4][4], int *hints);
void	asign(int grid[4][4], int *i, int *j, int arr[4][4]);

#endif
