B. 2D Array (Two-Dimensional)

Definition: An array organized into rows and columns.

int arr[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
};

Visual representation:

       Col 0  Col 1  Col 2
       ┌─────┬─────┬─────┐
Row 0  │  10 │  20 │  30 │
       ├─────┼─────┼─────┤
Row 1  │  40 │  50 │  60 │
       └─────┴─────┴─────┘

Access an element:

cout << arr[1][2];  // Output: 60

Remember: arr[row][column]

The first index represents the row, and the second represents the column.