#include <stdio.h>
#include <stdlib.h>
#include "ll.h"
#include "sudoku.h"

// sudoku solver in C
    
// update which numbers are avail for the row, col, or sqr
void update_row(node** tracker, int board[9][9])
{
    int curr_val, index;
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            curr_val = board[i][j];

            if (!curr_val)
                continue;

            if((index = contains(tracker[i], curr_val)) != -1) 
            {
                eliminate(&tracker[i], index);
                row_size[i]--;
            }
        }
        display(tracker[i]);
    }
}

// initializes tracking lists with available numbers 
void init_tracker(node** tracker)
{
    node* arr = *tracker;
    // initialize array of linked list heads
    for (int i = 0; i <= 8; i++)
    {
        // printf("inb4 seg fault: init\n");
        if (((arr) = (node*)malloc(sizeof(int*) * 9)) == 0)
        {
            printf("failed to allocate memory\n");
            exit(0);
        }

        tracker[i] = create(1);
        for (int j = 1; j <= 8; j++)
        {
            // printf("inb4 seg fault: ll\n");
            // tracker of i,j is a node create returns a node*
            insert(tracker[i], j + 1);                        
        }
        // display(tracker[i]);
    }
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
    int board[9][9]= {{1, 0, 6, 4, 0, 0, 0, 0, 7},
                      {0, 0, 9, 0, 0, 7, 0, 0, 0},
                      {0, 0, 8, 9, 2, 0, 0, 4, 6},
                      {0, 6, 0, 1, 0, 4, 2, 0, 0},
                      {0, 8, 1, 0, 0, 0, 0, 3, 0},
                      {2, 0, 0, 8, 0, 5, 6, 0, 1},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 3, 4, 0, 6, 0, 7, 0, 0},
                      {0, 1, 7, 0, 0, 0, 9, 6, 0}};

    // allocate metadata trackers
        // one function to create arr of linked list of size 9
        // init in same function
        // allocate an array of size 9 of node stars

    // initialize trackers
    node* row_tracker;
    init_tracker(&row_tracker);

    node* col_tracker;
    init_tracker(&col_tracker);
    
    node* sqr_tracker;
    init_tracker(&sqr_tracker);

    // scour board to correct metadata
    update_row(&row_tracker, board);
    printf("\n");

    // update_trkr(&col_tracker, board, COL);
    // printf("\n");

    // update_trkr(&sqr_tracker, board, SQR);
    // printf("\n");

    // call to solve positions
    // solve_puzzle(board);

    // deallocate memory
        // kill lists
        // free arrays

    return 0;
}