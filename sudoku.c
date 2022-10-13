#include <stdio.h>
#include <stdlib.h>
#include "ll.h"
#include "sudoku.h"

// sudoku solver in C
int board[9][9] =  {{1, 0, 6, 4, 0, 0, 0, 0, 7},
                    {0, 0, 9, 0, 0, 7, 0, 0, 0},
                    {0, 0, 8, 9, 2, 0, 0, 4, 6},
                    {0, 6, 0, 1, 0, 4, 2, 0, 0},
                    {0, 8, 1, 0, 0, 0, 0, 3, 0},
                    {2, 0, 0, 8, 0, 5, 6, 0, 1},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 3, 4, 0, 6, 0, 7, 0, 0},
                    {0, 1, 7, 0, 0, 0, 9, 6, 0}};

// update which numbers are avail for the row
void update_row(node** tracker)
{
    int curr_val, index;
    node* arr = *tracker;

    // redo
}

// initializes tracking lists with available numbers 

// create a variable node* and return that to the tracker variable
node* init_tracker()
{
    node* arr;
    if ((arr = (node*)malloc(sizeof(node)*9)) == 0)
    {
        printf("malloc failure\n");
        exit(0);
    }

    // node* addr = arr;

    for (int i = 0; i <= 8; i++)
    {
        arr[i] = *create(1);

        for (int j = 1; j <= 8; j++)
        {
            insert(&arr[i], j + 1);
        }
        // arr++;
    }
    return arr; // wrong return address
}

// check to see if position x, y can be solved
// int solve_position(int row, int col, )
// {
//     // initialize a list of avail numbers (cross reference)
//     // if size == 1 number found
//     // other win conditions here
//     return 0;
// }

// does pointer to 2d array even compile
// int solve_puzzle(int *board[][])
// {
//     // for each position 
//     //      call solve position (skip if position is non-zero)
//     //      count number of solved positions
//     //      if number of solved positions != 81
//     //      then recurse

//     return 0;
// }

int main(void)
{
    // allocate metadata trackers
        // one function to create arr of linked list of size 9
        // init in same function
        // allocate an array of size 9 of node stars

    // initialize trackers
    node* row_tracker = init_tracker();
    
    for (int i = 0; i < 9; i++)
        display(&row_tracker[i]);



    // printf("%d\n", row_tracker[1].data);
    // printf("%d\n", row_tracker[7].next->data);

    // node* col_tracker;
    // init_tracker(&col_tracker);
    
    // node* sqr_tracker;
    // init_tracker(&sqr_tracker);

    // scour board to correct metadata
    // update_row(&row_tracker);
    // printf("\n");

    // call to solve positions
    // solve_puzzle(board);

    // deallocate memory
        // kill lists
        // free arrays

    return 0;
}