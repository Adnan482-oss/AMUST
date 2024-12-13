# Cricket Game in C

## Overview
This is a simple yet engaging console-based cricket game written in C. The game simulates a cricket match between the player and the computer. It includes features such as a toss, batting, bowling, and a dynamic scoreboard that displays ball-by-ball scores and final results.

---

## Features
- **Toss Simulation**: Players can choose Heads or Tails for the toss.
- **Dynamic Gameplay**: The toss winner chooses to bat or bowl first.
- **Ball-by-Ball Simulation**: Random run generation for each ball (0-6 runs per ball).
- **Scoreboard System**: Tracks and displays ball-by-ball scores using a 2D array.
- **Result Announcement**: Declares the winner based on the final scores or a tie if scores are equal.
- **Customizable Match Length**: Players can set the number of balls for the game (up to 100 balls).

---

## How It Works
1. **Toss**: The game starts with a toss where the player chooses Heads or Tails. The computer randomly decides the toss result.
2. **Innings**: Based on the toss result, the player or computer bats first.
3. **Ball Simulation**: Runs are randomly generated for each ball during the batting.
4. **Scoreboard**: After both innings, the scoreboard displays ball-by-ball scores for the player and computer.
5. **Result**: The game calculates and announces the winner based on the scores.

---

## Getting Started

### Prerequisites
To compile and run this program, you need:
- A C compiler (e.g., GCC).
- A terminal or IDE to execute the program.


---

## Example Output
```
Welcome to the Cricket Game!
Toss Time! Choose: 0 for Heads, 1 for Tails: 0
The toss result is: Heads
You won the toss! Choose:
1. Bat first
2. Bowl first
1

Enter the number of balls for the game: 6

Your turn to bat!
Ball 1: You scored 4 runs.
Ball 2: You scored 6 runs.
...
Your total score: 35

Computer's turn to bat!
Ball 1: Computer scored 3 runs.
Ball 2: Computer scored 0 runs.
...
Computer's total score: 30

Scoreboard:
Ball    Player  Computer
1       4       3
2       6       0
...
Final Scores:
Player: 35
Computer: 30

Congratulations! You won by 5 runs.
```

---

## Customization
- Modify the maximum number of balls by changing the `MAX_BALLS` constant in the code.
- Extend functionality to include multiple innings or wickets.
- Implement advanced features like powerplay overs, dynamic difficulty, or commentary.

---

## Contributing
Contributions are welcome! If you have ideas for improving the game, feel free to fork the repository and submit a pull request.

---

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.

---

## Acknowledgements
- This project uses the `rand()` function for random run generation.
- Thanks to the C programming community for continuous inspiration and resources.

