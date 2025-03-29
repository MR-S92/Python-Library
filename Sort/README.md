# Project-Description

Solve: Analyze three (compiled!) sorting programs to determine which algorithms they use. 

- Selection sort iterates through the unsorted portions of a list, selecting the smallest element each time and moving it to its correct location.
- Bubble sort compares pairs of adjacent values one at a time and swaps them if they are in the incorrect order. This continues until the list is sorted.
- Merge sort recursively divides the list into two repeatedly and then merges the smaller lists back into a larger one in the correct order.
## How to run the program
Multiple .txt files are provided to you. These files contain n lines of values, either reversed, shuffled, or sorted.
For example, reversed10000.txt contains 10000 lines of numbers that are reversed from 10000, while random50000.txt contains 50000 lines of numbers that are in random order.
The different types of .txt files may help you determine which sort is which. Consider how each algorithm performs with an already sorted list. How about a reversed list? Or shuffled list? It may help to work through a smaller list of each type and walk through each sorting process.
Time each sort with different inputs
To run the sorts on the text files, in the terminal, run ./[program_name] [text_file.txt]. Make sure you have made use of cd to move into the sort directory!
For example, to sort reversed10000.txt with sort1, run ./sort1 reversed10000.txt.
You may find it helpful to time your sorts. To do so, run time ./[sort_file] [text_file.txt].
For example, you could run time ./sort1 reversed10000.txt to run sort1 on 10,000 reversed numbers. At the end of your terminal’s output, you can look at the real time to see how much time actually elapsed while running the program.
