# Python-Library
A collection of my past programming code, documented for reference and continuous improvement.

## Mario-Code
Question: Implement a program in C that recreates a pyramid, using hashes (#) for bricks, as in the below:

![image](https://github.com/user-attachments/assets/4cb91006-7a56-4e8c-b67d-4aab307c108d)

- <a href= "https://github.com/MR-S92/Python-Library/blob/main/mario.c">Link to Code </a>

## Cash-Code
Question: Implement a program in C that prints the minimum coins needed to make the given amount of change, in cents back to the customer. 

- If you input -1, does your program prompt you again?
- If you input 0, does your program output 0?
- If you input 1, does your program output 1 (one penny)?
- If you input 4, does your program output 4 (four pennies)?
- If you input 5, does your program output 1 (one nickel)?
- If you input 24, does your program output 6 (two dimes and four pennies)?
- If you input 25, does your program output 1 (one quarter)?
- If you input 26, does your program output 2 (one quarter and one penny)?
- If you input 99, does your program output 9 (three quarters, two dimes, and four pennies)?

- <a href= "https://github.com/MR-S92/Python-Library/blob/main/cash.c">Link to Code </a>

## Scrabble-code
Question: Implement a program in C that determines the winner of a short Scrabble game. Your program should prompt for input twice: once for “Player 1” to input their word and once for “Player 2” to input their word. Then, depending on which player scores the most points, your program should either print “Player 1 wins!”, “Player 2 wins!”, or “Tie!”.


| A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | 3 | 3 | 2 | 1 | 4 | 2 | 4 | 1 | 8 | 5 | 1 | 3 | 1 | 1 | 3 | 10 | 1 | 1 | 1 | 1 | 4 | 4 | 8 | 4 | 10 |

For example, if we wanted to score the word “WIN”, we would note that the ‘W’ is worth 4 points, the ‘I’ is worth 1 point, the ‘N’ is worth 1 points. Summing these, we get that “WIN” is worth 6 points.


- <a href= "https://github.com/MR-S92/Python-Library/blob/main/scrabble.c">Link to Code </a>

## Caesar-code
Design and implement a program, caesar, that encrypts messages using Caesar’s cipher.

- Implement your program in a file called caesar.c in a directory called caesar.
- Your program must accept a single command-line argument, a non-negative integer. Let’s call it 
 for the sake of discussion.
- If your program is executed without any command-line arguments or with more than one command-line argument, your program should print an error message of your choice (with printf) and return from main a value of 1 (which tends to signify an error) immediately.
If any of the characters of the command-line argument is not a decimal digit, your program should print the message Usage: ./caesar key and return from main a value of 1.
- Do not assume that 
 will be less than or equal to 26. Your program should work for all non-negative integral values of 
 less than 
. In other words, you don’t need to worry if your program eventually breaks if the user chooses a value for 
 that’s too big or almost too big to fit in an int. (Recall that an int can overflow.) But, even if 
 is greater than 
, alphabetical characters in your program’s input should remain alphabetical characters in your program’s output. For instance, if 
 is 
, A should not become \ even though \ is 
 positions away from A in ASCII, per asciitable.com; A should become B, since B is 
 positions away from A, provided you wrap around from Z to A.
- Your program must output plaintext: (with two spaces but without a newline) and then prompt the user for a string of plaintext (using get_string).
- Your program must output ciphertext: (with one space but without a newline) followed by the plaintext’s corresponding ciphertext, with each alphabetical character in the plaintext “rotated” by k positions; non-alphabetical characters should be outputted unchanged.
- Your program must preserve case: capitalized letters, though rotated, must remain capitalized letters; lowercase letters, though rotated, must remain lowercase letters.
- After outputting ciphertext, you should print a newline. Your program should then exit by returning 0 from main.

- <a href= "https://github.com/MR-S92/Python-Library/blob/main/caesar.c">Link to Code </a>
