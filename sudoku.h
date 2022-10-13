#ifndef SUDOKU
#define SUDOKU

#define ROW 1
#define COL 2
#define SQR 3

// tracks the size of lls in trackers arrays
// int row_size[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};
// int col_size[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};
// int sqr_size[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};

node* init_tracker();
void update_row(node**);

#endif