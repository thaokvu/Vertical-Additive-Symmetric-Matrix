## What is a Matrix?
- **Matrixes:** A 2-dimensional (2D) array represented as a row x column data structure

- **Vertical Additive Symmetric Matrix:** A  matrix of integer numbers is defined to exhibit vertical additive symmetry if the sum of the numbers in the columns of the matrix exhibits vertical symmetry. In a list with an odd number of columns, the middle column is considered symmetric with itself.


## Objective
**The program must read a file of candidate matrixes that are specified in the file in the following way:**
1. The first file row contains 2 space delimited numbers for the number of rows and columns in the matrix that follows.
2. The matrix that follows consists of numbers in the form of multiple lines of space-delimited numbers. Each number can be at most 4 digits long.
3. In this project, no input candidate matrix should have more than 20 rows and columns.
4. The file name to be read is to be `matrixes.txt`.
5. The file must contain at least 10 candidate matrixes.
  - 6 of the matrixes must have vertical additive symmetry
  - 4 must not have vertical additive symmetry


**Check the following regards in the input file**
1. If the file open fails.
2. Correctly detecting the end of the file.
  - The program should operate correctly even if there are blanks at the end of the file.
3. The program does not have to check for data or format errors in the file.



## Requirements
1. Process each matrix one at a time.
2. All data displays can assume that each matrix entry is made up of most of the 5 integer places.
3. All data displays must be in a well-formatted tabular style using spaces.
4. Display the inputted matrix.
5. Display a data list of the column vertical additive sums.
6. Display the sorted matrix rows.
  - Display each row of the matrix in ascending order, one row per line of output.
7. Display a message that states whether this matrix has vertical additive symmetry.
8. Display a message that pauses the screen and states to enter a key to continue.
