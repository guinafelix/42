#include <unistd.h>

#define BOARD_SIZE 10

// Function to check if a queen can be placed at a given position
int is_safe(int board[BOARD_SIZE][BOARD_SIZE], int row, int col) {
    int i = 0, j = 0;

    // Check the left side of the row
    while (i < col) {
        if (board[row][i]) return 0;
        i++;
    }

    // Check the upper diagonal on the left side
    i = row, j = col;
    while (i >= 0 && j >= 0) {
        if (board[i][j]) return 0;
        i--;
        j--;
    }

    // Check the lower diagonal on the left side
    i = row, j = col;
    while (i < BOARD_SIZE && j >= 0) {
        if (board[i][j]) return 0;
        i++;
        j--;
    }

    return 1;
}

// Function to write a number to stdout using the write function
void write_number(int num) {
    char c = num + '0';
    write(1, &c, 1);
}

// Function to solve the ten_queen_puzzle
int solve_queens(int board[BOARD_SIZE][BOARD_SIZE], int col) {
    // Base case: All queens are placed successfully
    if (col == BOARD_SIZE) {
        // Print the solution
        int i = 0;
        while (i < BOARD_SIZE) {
            int j = 0;
            while (j < BOARD_SIZE) {
                if (board[j][i]) {
                    write_number(j);
                    break;
                }
                j++;
            }
            i++;
        }
        write(1, "\n", 1);
        return 1;
    }

    int count = 0;
    int i = 0;

    // Try placing the queen in each row of the current column
    while (i < BOARD_SIZE) {
        if (is_safe(board, i, col)) {
            board[i][col] = 1; // Place the queen
            count += solve_queens(board, col + 1); // Recur for the next column
            board[i][col] = 0; // Backtrack and remove the queen
        }
        i++;
    }

    return count;
}

// Main function to find all possible placements and return the count
int ft_ten_queens_puzzle(void) {
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    return solve_queens(board, 0);
}
