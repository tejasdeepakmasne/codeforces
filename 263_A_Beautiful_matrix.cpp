/*
A. Beautiful Matrix
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

    Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
    Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5). 

You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.
Input

The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.
Output

Print a single integer — the minimum number of moves needed to make the matrix beautiful.
*/

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int matrix[5][5];
    int i=0,j=0;
    int central_position[] = {2,2};
    int current_position[2];
    int num_of_moves {0};
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            cin >> matrix[i][j];
            if(matrix[i][j]==1) {
                current_position[0] = i;
                current_position[1] = j;
                
                num_of_moves = abs(central_position[0]-current_position[0]) + abs(current_position[1]-central_position[1]);
            }
        }
    }

    cout << num_of_moves;
    return 0;
}