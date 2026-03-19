# Game "Rock - Paper - Scissors "

## Description
Console game "Rock Paper Scissors" implemented in C. Play against the computer and track your score within a limited number of attempts.

- **Rock** beats Scissors
- **Paper** beats Rock
- **Scissors** beats Paper
Game features: 3 attempts per game, score tracking for both player and computer, draws don't waste attempts.

### Requirements
- C compiler (GCC recommended)
- Standard C library

#### How to Run
1. Download the `game.c`
2. Run the following command in the terminal to check your compiler installation:
```bash
gcc --version
```
3. Compile the program using the command:
```bash
gcc game.c -o game
```

4. Launch the game:
```bash
./game
```
on Windows:
``` bash
game.exe
```

## Code Explanation

**Connected libraries:**
    * <stdio.h> - for input/output operations 
    * <stdlib.h> - for rand() and srand() functions
    * <time.h> - for time() function to generate random seed

**Game Logic:**
   *Random number generation for computer's move using rand() % 3 + 1
    *Input validation (numbers 1-3 only)
    *Win/loss conditions using logical operators
    *Score tracking with integer variables

**Input Validation:**
    *Number must be between 1 and 3
    *Invalid input doesn't waste an attempt
    *Draws don't consume attempts

## Author

kaitnoywhg

## License

This project is licensed under the GPL
