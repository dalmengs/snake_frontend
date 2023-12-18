/************************************************
 *                                              *
 *   2023-2 Programming Practice Term Project   *
 *         Name:
 *         Student Number: 20XX-XXXXX           *
 *                                              *
 ************************************************/


#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// do not modify the grid size
#define GRID_WIDTH 20
#define GRID_HEIGHT 20

// you can adjust constants below 
#define INITIAL_SNAKE_LENGTH 3
#define INITIAL_SNAKE_X 5
#define INITIAL_SNAKE_Y 5
#define INITIAL_SNAKE_DIRECTION 0 // 0: up, 1: right, 2: down, 3: left
#define MAX_APPLE 1
#define SPEED 1.2 // higher is faster

typedef struct {
    char *name;
    char *id;
} StudentInfo;

// do not edit this struct; it is used to send data to frontend
typedef struct {
    char name[50]; // Assuming name won't exceed 50 characters
    int score;
} LeaderboardEntry;

StudentInfo student;

// the grid that is sent to frontend
// the characters stored in array will show in grid
// if the cell contains '*', it would be rendered green. you can use it to draw the snake.
// if the cell contains '@', it would be rendered as an apple. you can use it to place and draw an apple.
char grid[GRID_HEIGHT][GRID_WIDTH];

// reads in backend
int snakeLength = INITIAL_SNAKE_LENGTH;
int gameOver = 0; // 0 for not over, 1 for game over

int snakeDirection = INITIAL_SNAKE_DIRECTION; // 0: Up, 1: Right, 2: Down, 3: Left
int snakeHeadX = GRID_WIDTH / 2;
int snakeHeadY = GRID_HEIGHT / 2;


// The functions here are used in the backend to communicate with the frontend
// The parameters and return values are defined in the frontend code - you should not change them
LeaderboardEntry* getLeaderboardData();
int getLeaderboardSize();
void initializeGame();
void updateGame();
void setDirection(const char* direction);
void handleGameOver();
void appendToLeaderboard(const char *name, int score);


// test variable
// remove it when you implement the game
int i = 0;


// returns a list of leaderboard entries sorted in descending order
// higher score first
// if same score, sort alphabetically, but Anonymous should come last
LeaderboardEntry* getLeaderboardData() {
    // write your code here
    return NULL;
}

// returns the number of entries to display in the leaderboard
// the frontend will only display up to top 5 entries
// return 5 if there are more than 5 entries, otherwise return the number of entries
int getLeaderboardSize() {
    // write your code here

    return 0;
}


// initialize states for a new game
void initializeGame() {
    /* TO DO */
    student.name = "김민수";  // put your name
    student.id = "2019-12345"; // put your student id

    memset(grid, ' ', sizeof(grid));
    // write your code here


    gameOver = 0;

    // below is test code
    i = 0;
}


// calls every update cycle 
// (default: 1 sec, interval depends on SPEED)
void updateGame() {
    // write your code here
    // below is a test code.
    if (i < 20)
        grid[i][i] = '*';
    i++;
    snakeLength++;
}

// get direction input and apply it to snake
// inputs are: "UP" "RIGHT" "DOWN" "LEFT"
void setDirection(const char* direction) {
    // write your code here
}

// calls when game is over
// you should set gameOver to 1 here
void handleGameOver() {
    gameOver = 1;
}

// add a new entry to leaderboard
// write to file leaderboard.txt
// set gameOver to 0 again because gameOver handling is complete
void appendToLeaderboard(const char *name, int score) {
    // write your code here


    gameOver = 0;
}
