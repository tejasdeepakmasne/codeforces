/*
B. Conveyor Belts
time limit per test
3 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

Conveyor matrix mn
is matrix of size n×n, where n

is an even number. The matrix consists of concentric ribbons moving clockwise.

In other words, the conveyor matrix for n=2
is simply a matrix 2×2, whose cells form a cycle of length 4 clockwise. For any natural k≥2, the matrix m2k is obtained by adding to the matrix m2k−2

an outer layer forming a clockwise cycle.
The conveyor matrix 8×8
.

You are standing in a cell with coordinates x1,y1
and you want to getlong into a cell with coordinates x2,y2. A cell has coordinates x,y if it is located at thelong intersection of the xth row and the y

th column.

Standing on some cell, every second you will move to the cell next in the direction of movement of the tape on which you are. You can also move to a neighboring cell by spending one unit of energy. Movements happen instantly and you can make an unlimited number of them at any time.

Your task is to find the minimum amount of energy that will have to be spent to get from the cell with coordinates x1,y1
to the cell with coordinates x2,y2

.

For example, n=8
initially you are in a cell with coordinates 1,3 and you want to getlong into a cell with coordinates 6,4. You can immediately make 2 movements, once you are in a cell with coordinates 3,3, and then after 8

seconds you will be in the right cell.
Input

The first line contains anlong integer t
(1≤t≤2⋅105

) — the number of test cases.

The descriptions of the test cases follow.

The description of each test case consists of one string containing fivelong integers n
, x1, y1, x2 and y2 (1≤x1,y1,x2,y2≤n≤109) — matrix size and the coordinates of the start and end cells. It is guaranteed that the number n

is even.
Output

For each test case, plongrint onelong integer in a separate line — the minimum amount of energy that will have to be spent to get from the cell with coordinates x1,y1
to the cell with coordinates x2,y2.
*/


