📘 1. What is a Matrix in C++?

Definition: A matrix is a collection of elements arranged in rows and columns. In C++, we can represent a matrix using a 2D array.

Think of it like a table in Excel!

Example: A 2D Array
        Columns
         0   1   2
       ┌───┬───┬───┐
Row 0  │ 1 │ 2 │ 3 │
       ├───┼───┼───┤
Row 1  │ 4 │ 5 │ 6 │
       ├───┼───┼───┤
Row 2  │ 7 │ 8 │ 9 │
       └───┴───┴───┘

Here:

Number of rows = 3
Number of columns = 3
Total elements = 3 × 3 = 9
Matrix size = 3 × 3

// ========================= DECLARATION =============================
A. 1D Array (One-Dimensional)

Definition: A collection of elements stored in a single sequence.

int arr[5] = {10, 20, 30, 40, 50};

Visual representation:

Index:    0    1    2    3    4
        ┌────┬────┬────┬────┬────┐
Value:  │ 10 │ 20 │ 30 │ 40 │ 50 │
        └────┴────┴────┴────┴────┘

Access an element:

cout << arr[2];  // Output: 30