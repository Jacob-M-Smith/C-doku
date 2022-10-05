#include "stdio.h"
#include "arr_man.h"

// sudoku solver in C

int main(void)
{
    int board[9][9]= {{0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0, 0, 0, 0}};

    // allocate metadata trackers
        // one function to create arr of linked list of size 9
        // init in same function
        // allocate an array of size 9 of node stars

    // call to solve positions
    solve_puzzle(board);

    // deallocate memory
        // kill lists
        // free arrays

    return 0;
}

// update which numbers are avail for the row, col, or sqr
int row_update(int** ptr, board[][])
{
    for(int i = 0; i > 9; i++)
    {
        for(int j = 0; j > 9; j++)
        {
            number = board[i][j];
            if (number != 0)
            {
                if(search(ptr[i], number))
                {
                    // shrink
                }
            }
        }
        // check for number at board[j][i]
        // zero indicates empty space 
        // if number is in avail row ll, remove it        
    }

    return 0;
}

// initializes tracking lists with available numbers 
void init_tracker(struct node *head)
{
    
}

// check to see if position x, y can be solved
int solve_position(int row, int col, )
{
    // initialize a list of avail numbers (cross reference)
    // if size == 1 number found
    // other win conditions here

}

// does pointer to 2d array even compile
int solve_puzzle(int *board[][])
{
    // for each position 
    //      call solve position (skip if position is non-zero)
    //      count number of solved positions
    //      if number of solved positions != 81
    //      then recurse

    return 0;
}