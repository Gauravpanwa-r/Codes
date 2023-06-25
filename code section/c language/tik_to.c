#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

char board[ROWS][COLS]; // game board
char currentPlayer;     // current player (either 'X' or 'O')

// Initializes the game board with empty spaces
void initBoard() {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      board[i][j] = ' ';
    }
  }
}

// Prints the current state of the game board
void printBoard() {
  printf("\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%c | ", board[i][j]);
    }
    printf("\n");
  }
}

// Prompts the player to make a move
int count=0;
void makeMove() {
  count++;
  int row, col;
  printf("\nPlayer %c, enter your move (row first and column in other line): ", currentPlayer);
  scanf("%d%d", &row, &col);
  row--; col--; // adjust for 0-indexing
  if (row >= 0 && row < ROWS && col >= 0 && col < COLS && board[row][col] == ' ') {
    board[row][col] = currentPlayer;
  } else {
    printf("Invalid move.\n");
    if(count==9)
    printf("The is draw\n");
    makeMove();
  }
}

// Returns 1 if the game is won, 0 otherwise
int checkWin() {
  // check rows
  for (int i = 0; i < ROWS; i++) {
    if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
      return 1;
    }
  }

  // check columns
  for (int i = 0; i < COLS; i++) {
    if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) {
      return 1;
    }
  }

  // check diagonals
  if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) {
    return 1;
  }
  if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) {
    return 1;
  }

  return 0;
}

int main() {
  initBoard();
  currentPlayer = 'X';

  while (1) {
    printBoard();
    makeMove();
    if (checkWin()) {
      printf("Player %c wins!\n", currentPlayer);
      break;
    }
    if (currentPlayer == 'X') {
      currentPlayer = 'O';
    } else {
      currentPlayer = 'X';
    }
    
  }
  return 0;
}
