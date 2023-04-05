
// Approach:
// Printing a matrix in spiral form is the same as peeling an onion layer by layer. Because we are printing the elements layer by layer starting from the outer layers.

// In this approach, we will be using four loops to print all four sides of the matrix.

// 1st loop: This will print the elements from left to right.

// 2nd loop: This will print the elements from top to bottom.

// 3rd loop: This will print the elements from right to left.

// 4th loop: This will print the elements from bottom to top.

// Steps:

// Create and initialize variables top as starting row index, bottom as ending row index left as starting column index, and right as ending column index. As shown in the image given below.

// In each outer loop traversal print the elements of a square in a clockwise manner.
// Print the top row, i.e. Print the elements of the top row from column index left to right and increase the count of the top so that it will move to the next row.
// Print the right column, i.e. Print the rightmost column from row index top to bottom and decrease the count of right.
// Print the bottom row, i.e. if top <= bottom, then print the elements of a bottom row from column right to left and decrease the count of bottom
// Print the left column, i.e. if left <= right, then print the elements of the left column from the bottom row to the top row and increase the count of left.
// Run a loop until all the squares of loops are printed.
// Code:

#include <bits/stdc++.h>

using namespace std;

const int R = 4, C = 4;

void printSpiral(int mat[4][4], int R, int C)
{
    int top = 0, left = 0, bottom = R - 1, right = C - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            cout << mat[top][i] << " ";

        top++;

        for (int i = top; i <= bottom; i++)
            cout << mat[i][right] << " ";

        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                cout << mat[bottom][i] << " ";

            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                cout << mat[i][left] << " ";

            left++;
        }
    }
}

int main()
{
    int arr[R][C] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    printSpiral(arr, R, C);

    return 0;
}
// Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

// Time Complexity: O(R x C)

// Reason: We are printing every element of the matrix so the time complexity is O(R x C) where R and C are rows and columns of the matrix.

// Space Complexity: O(1)