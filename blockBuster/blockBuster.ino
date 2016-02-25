const int letter_g[8][8] = {  
  {0, 0, 1, 1, 1, 1, 1, 0},
  {0, 1, 0, 0, 0, 0, 0, 0},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {1, 0, 0, 1, 1, 1, 1, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 0, 1, 1, 1, 1, 1, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
};

const int letter_a[8][8] = {  
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 1, 0, 1, 0, 0, 0},
  {0, 1, 0, 0, 0, 1, 0, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {1, 1, 1, 1, 1, 1, 1, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
};

const int letter_m[8][8] = {  
  {1, 1, 1, 0, 1, 1, 0, 0},
  {1, 0, 0, 1, 0, 0, 1, 0},
  {1, 0, 0, 1, 0, 0, 1, 0},
  {1, 0, 0, 1, 0, 0, 1, 0},
  {1, 0, 0, 1, 0, 0, 1, 0},
  {1, 0, 0, 1, 0, 0, 1, 0},
  {1, 0, 0, 1, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
};

const int letter_e[8][8] = {  
  {1, 1, 1, 1, 1, 1, 1, 1},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 0, 0, 0},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {1, 0, 0, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0, 0},
};

const int letter_o[8][8] = {  
  {0, 0, 1, 1, 1, 0, 0, 0},
  {0, 1, 0, 0, 0, 1, 0, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {0, 1, 0, 0, 0, 1, 0, 0},
  {0, 0, 1, 1, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
};

const int letter_v[8][8] = {  
  {1, 0, 0, 0, 0, 0, 1, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {1, 0, 0, 0, 0, 0, 1, 0},
  {0, 1, 0, 0, 0, 1, 0, 0},
  {0, 0, 1, 0, 1, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
};

const int letter_r[8][8] = {  
  {0, 1, 1, 1, 1, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 1, 0, 1, 1, 1, 0, 0},
  {0, 1, 0, 0, 1, 0, 0, 0},
  {0, 1, 0, 0, 0, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
};

const int disp_one[8][8] = {  
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 1, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 1, 1, 1, 1, 0, 0},
};

const int disp_two[8][8] = {  
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 1, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 1, 1, 1, 1, 1, 1, 0},
};

const int disp_three[8][8] = {  
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
};

int screen[8][8] = {
  { 1,1,1,1,1,1,1,1 },
  { 1,1,1,1,1,1,1,1 },
  { 1,1,1,1,1,1,1,1 },
  { 0,0,0,0,0,0,0,0 },
  { 0,0,0,0,0,0,0,0 },
  { 0,0,0,0,0,0,0,0 },
  { 0,0,0,0,0,0,0,0 },
  { 0,0,0,0,0,0,0,0 } 
};

unsigned long time;

// If col is high & row is low then the LED is on
const int col[8] = { 11, A3, 10, A1,  3, 9, 4, 7};
const int row[8] = { 2, A4, A0,  8, 12, 6, 5, A2};

// Potentiometer pin
const int potPin = A6;

// Global variables 
int lastRow = 7;
int userPos;
int ballPosCol = 5;
int ballPosRow = 6;

// Direction of the ball is determined by [up/down, left/right]
int ballDirection[2] = {-1, 1};

// Number of blocks left
int blockCount = 24;

// Game status
bool gameOver = false;
bool gameWon = false;

// Speed of game
int start_gameSpeed = 100;
int gameSpeed = 100;

// Set up code
void setup() {
  for (int thisPin = 0; thisPin < 8; thisPin++) {
    pinMode(col[thisPin], OUTPUT);
    pinMode(row[thisPin], OUTPUT);
    digitalWrite(col[thisPin], HIGH);
  } 
  pinMode(potPin, INPUT);

  // Some start animation
  dispStartAnimation();
}

void loop() {
  // If you lost
  if (gameOver) {
    dispGameOver();

    unsigned long now = millis();
    // After 5 seconds, reset the game state
    if (now - time > 5000) {
      resetGameState();
    }
  } else if (gameWon) {
    // If you won
    dispGameWon();

    unsigned long now = millis();
    // After 5 seconds, reset the game state
    if (now - time > 5000) {
      resetGameState();
    }
  } else {
    for (int i = 0; i < gameSpeed * 2; i++) {
      // Get current locaiton of user
      getUserPosition();
      
      // Get current location of the ball
      setBallPositionOnScreen();

      // Display screen
      displayScreen();
      
      // Clear user's and ball's position
      for (int j = 0; j < 8; j++) {
        screen[lastRow][j] = 0;
      }
      screen[ballPosRow][ballPosCol] = 0;
      
      // Update ball position every x seconds - determined by progress
      if (i % gameSpeed == 0) { 
        moveBallPos();
        gameSpeed = start_gameSpeed + 2 * blockCount / 24;
        
        // If game state changes - update it by breaking out of the loop
        if (gameOver) {
          time = millis();
          break;
        } 
        if (gameWon) {
          time = millis();
          break;
        }
      }

      // Delay the program
      delay(1);
    }  
  }
}

// Obtain user's position based on pot
void getUserPosition() {
  int val = analogRead(A6); 
  userPos = map(val, 1009, 1023, 0, 7);
  
  // Create the user block
  if ((userPos > 0) && (userPos < 7)) {
    screen[lastRow][userPos - 1] = 1;
    screen[lastRow][userPos] = 1;
    screen[lastRow][userPos + 1] = 1;
  } else if (userPos == 0) {
    screen[lastRow][userPos] = 1;
    screen[lastRow][userPos + 1] = 1;
  } else if (userPos == 7) {
    screen[lastRow][userPos - 1] = 1;
    screen[lastRow][userPos] = 1;
  }
}

// Display user onto screen
void setBallPositionOnScreen() {
  screen[ballPosRow][ballPosCol] = 1;
}

// Move the ball position
void moveBallPos() {
  // If check if user is there
  checkUserAndBall();

  // Check if the ball hit a block
  checkHitBlock();

  // Update the direction of the ball
  updateBallDirection();

  // Check for any bounces off of the wall
  checkWallBounce(); 

  // Check if user lost
  checkGameOver();

  // Check if user won
  checkGameWon();
}

// Check if the user hit the ball
void checkUserAndBall() {
  int UP[2] = {-1, 0};
  int UP_LEFT[2] = {-1, -1};
  int UP_RIGHT[2] = {-1, 1};

  int res = checkIfUserHitBall(ballPosRow, ballPosCol, userPos);
  // Hit in the middle!
  if (res == 0) {
    ballDirection[0] = UP[0];
    ballDirection[1] = UP[1];
  } else if (res == 1) {
  // Hit on the left 
    ballDirection[0] = UP_LEFT[0];
    ballDirection[1] = UP_LEFT[1];

  } else if (res == 2) {
  // Hit on the right
    ballDirection[0] = UP_RIGHT[0];
    ballDirection[1] = UP_RIGHT[1];
  }
}

// Check user and ball collision
int checkIfUserHitBall(int ballRow, int ballCol, int userPos) {
  if (ballRow < 6) {
    return -1;
  }
  if (ballCol == userPos) {
    return 0;
  } else if (ballCol == (userPos - 1)) {
    return 1; 
  } else if (ballCol == (userPos + 1)) {
    return 2;
  } else {
    return -1;
  }
}

// Check if the ball hit block
bool checkHitBlock() {
  int ballRow = ballPosRow;
  int ballCol = ballPosCol;
  int nextBallRow = ballPosRow + ballDirection[0];
  int nextBallCol = ballPosCol + ballDirection[1];
  
  if (screen[nextBallRow][nextBallCol] == 1) {
    screen[nextBallRow][nextBallCol] = 0;
    ballDirection[0] =  0 - ballDirection[0];
    blockCount = blockCount - 1;
  }  
}

// Update location of ball
void updateBallDirection() {
  ballPosRow = ballPosRow + ballDirection[0];
  ballPosCol = ballPosCol + ballDirection[1];
}

// Check game status
void checkGameOver() {
  // If its game over
  if (ballPosRow == 8) {
    gameOver = true;
  }  
}

// Check game won
void checkGameWon() {
  if (blockCount == 0) {
    gameWon = true;
  }
}

// Check wall bounce
void checkWallBounce() {
  // Check if it hit the walls
  // Hit the ceiling
  if (ballPosRow == -1) {
    ballPosRow = 1;
    ballDirection[0] = 1;
  }

  if (ballPosCol == -1) {
    ballPosCol = 1;
    ballDirection[1] = 1;
  } else if (ballPosCol == 8) {
    ballPosCol = 6;
    ballDirection[1] = -1;
  }
}

// Reset game state
void resetGameState() {
  ballDirection[0] = -1;
  ballDirection[1] = 1;
  gameOver = false;
  gameWon = false;
  userPos = 5;
  ballPosCol = 5;
  ballPosRow = 6;
  blockCount = 24;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (i < 3) {
        screen[i][j] = 1;
      } else {
        screen[i][j] = 0;
      }
    }
  }
  // Start animation
  dispStartAnimation();
}

// Displaying code for game and gameover below
void displayScreen() {
  for(int r = 0; r < 8; r++){
    digitalWrite( row[r], LOW);
    for(int c = 0; c < 8; c++){
      digitalWrite(col[c], screen[r][c] ? HIGH : LOW );
    }
    delayMicroseconds(500);

    for(int c = 0; c < 8;c++){
      digitalWrite(col[c], LOW );
    }
    digitalWrite( row[r], HIGH);
  }
}

// Display start animation
void dispStartAnimation() {
  for (int i = 0; i < 900; i++) {
    for(int thisRow = 0; thisRow < 8; thisRow++){
      digitalWrite( row[thisRow], LOW);
      for(int thisCol = 0; thisCol < 8; thisCol++){    
        if (i < 300) {
          digitalWrite(col[thisCol], disp_three[thisRow][thisCol] ? HIGH : LOW );
        } else if (i < 600) {
          digitalWrite(col[thisCol], disp_two[thisRow][thisCol] ? HIGH : LOW );          
        } else {
          digitalWrite(col[thisCol], disp_one[thisRow][thisCol] ? HIGH : LOW );          
        }
      }
      delayMicroseconds(500);
      for(int thisCol = 0; thisCol < 8; thisCol++){
        digitalWrite(col[thisCol], LOW );
      }
      digitalWrite( row[thisRow], HIGH);
    }
  }
}

// Display Game over animation
void dispGameOver() {
  int maxI = 1200;
  for(int i=0; i < maxI; i++){
    for(int r=0; r<8; r++){
      digitalWrite( row[r], LOW);
      for(int c=0;c<8;c++) {
        if (i < (maxI / 8)) {
          digitalWrite(col[c], letter_g[r][c] ? HIGH : LOW );
        } else if (i < (2 * maxI / 8)) {
          digitalWrite(col[c], letter_a[r][c] ? HIGH : LOW );
        } else if (i < (3 * maxI / 8)) {
          digitalWrite(col[c], letter_m[r][c] ? HIGH : LOW );
        } else if (i < (4 * maxI / 8)) {
          digitalWrite(col[c], letter_e[r][c] ? HIGH : LOW );
        } else if (i < (5 * maxI / 8)) {
          digitalWrite(col[c], letter_o[r][c] ? HIGH : LOW );
        } else if (i < (6 * maxI / 8)) {
          digitalWrite(col[c], letter_v[r][c] ? HIGH : LOW );
        } else if (i < (7 * maxI / 8)) {
          digitalWrite(col[c], letter_e[r][c] ? HIGH : LOW );
        } else if (i < (8 * maxI / 8)) {
          digitalWrite(col[c], letter_r[r][c] ? HIGH : LOW );
        }
      }
      delayMicroseconds(500);

      for(int c=0;c<8;c++){
        digitalWrite(col[c], LOW );
      }
      digitalWrite( row[r], HIGH);
    }  
  }
}

// Display Game won animation
void dispGameWon() {
  const int letter_w[8][8] = {  
    {1, 0, 0, 0, 0, 0, 1, 0},
    {1, 0, 0, 1, 0, 0, 1, 0},
    {1, 0, 0, 1, 0, 0, 1, 0},
    {1, 0, 0, 1, 0, 0, 1, 0},
    {1, 0, 0, 1, 0, 0, 1, 0},
    {1, 0, 0, 1, 0, 0, 1, 0},
    {0, 1, 1, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
  };

  const int letter_i[8][8] = {  
    {1, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
  }; 

  const int letter_n[8][8] = {  
    {1, 0, 0, 0, 0, 0, 1, 0},
    {1, 1, 0, 0, 0, 0, 1, 0},
    {1, 0, 1, 0, 0, 0, 1, 0},
    {1, 0, 0, 1, 0, 0, 1, 0},
    {1, 0, 0, 0, 1, 0, 1, 0},
    {1, 0, 0, 0, 0, 1, 1, 0},
    {1, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
  };

  int maxI = 300;
  for(int i=0; i < maxI; i++){
    for(int thisRow = 0; thisRow < 8; thisRow++){
      digitalWrite( row[thisRow], LOW);
      for(int thisCol = 0; thisCol < 8; thisCol++) {
        if (i < (maxI / 8)) {
          digitalWrite(col[thisCol], letter_w[thisRow][thisCol] ? HIGH : LOW );
        } else if (i < (2 * maxI / 8)) {
          digitalWrite(col[thisCol], letter_i[thisRow][thisCol] ? HIGH : LOW );
        } else if (i < (3 * maxI / 8)) {
          digitalWrite(col[thisCol], letter_n[thisRow][thisCol] ? HIGH : LOW );
        } 
      }
      delayMicroseconds(500);
      for(int c=0;c<8;c++){
        digitalWrite(col[thisCol], LOW );
      }
      digitalWrite( row[thisRow], HIGH);
    }  
  }
}

// Test code below where

void allLit(int delay_ms) {
  for (int thisRow = 0; thisRow < 8; thisRow++) {
    // take the col pin (anode) high:
    digitalWrite(col[thisRow], HIGH);

    for (int thisCol = 0; thisCol < 8; thisCol++) {
      digitalWrite(row[thisCol], LOW);
    }
  }
  delay(delay_ms);
}

void allDark(int delay_ms) {
  for (int thisRow = 0; thisRow < 8; thisRow++) {
    // take the col pin (anode) high:
    digitalWrite(col[thisRow], LOW);

    for (int thisCol = 0; thisCol < 8; thisCol++) {
      digitalWrite(row[thisCol], LOW);
    }
  }
  delay(delay_ms);
}

void testRows(int delay_ms) {
  // Init the rows to clear 
  for (int thisRow = 0; thisRow < 8; thisRow++) {
    digitalWrite(row[thisRow], LOW);
  }
  // Init the cols to high
  for (int thisCol = 0; thisCol < 8; thisCol++) {
    digitalWrite(col[thisCol], HIGH);
  }
  // Init the rows to clear 
  for (int thisRow = 0; thisRow < 8; thisRow++) {
    digitalWrite(row[thisRow], HIGH);
    delay(delay_ms);
    digitalWrite(row[thisRow], LOW);
  }
}

