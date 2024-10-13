
#ifndef LIB_H
# define LIB_H

# define N 4

int		check_views(int grid[4][4], int *hints);
void	print_grid(int grid [4][4]);
void	print_criteria(int arr[4][4]);
void	fill_hints(int *hints, int arr[4][4]);
void	solve(int arr[4][4]);
void	init_grid(int arr[4][4], int grid[4][4]);
int		recursion(int grid[4][4], int arr[4][4], int r, int c);

int		check_views(int grid[4][4], int *hints);
int		check_row_left(int grid[4][4], int row, int *hints);
int		check_row_right(int grid[4][4], int row, int *hints);
int		check_col_up(int grid[4][4], int col, int expected);
int		check_col_down(int grid[4][4], int col, int expected);

int		row_leftright(int check, int *attr, int grid[4][4], int arr[4][4]);
int		col_updown(int check, int *attr, int grid[4][4], int arr[4][4]);
int		rightleft(int check, int *attr, int grid[4][4], int arr[4][4]);
int		downup(int check, int *attr, int grid[4][4], int arr[4][4]);
void	asign(int grid[4][4], int *i, int *j, int arr[4][4]);

#endif