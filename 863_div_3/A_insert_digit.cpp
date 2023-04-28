/*
A. Insert Digit
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

You have a positive number of length n

and one additional digit.

You can insert this digit anywhere in the number, including at the beginning or at the end.

Your task is to make the result as large as possible.

For example, you have the number 76543
, and the additional digit is 4. Then the maximum number you can get is 765443, and it can be obtained in two ways — by inserting a digit after the 3th or after the 4

th digit of the number.
Input

The first line contains a single integer t
(1≤t≤104

) — the number of test cases.

The descriptions of the test cases follow.

The first line of the description of each test case contains two integers n
and d (1≤n≤2⋅105; 0≤d≤9

) — the length of the number and an additional digit, respectively.

The second line of the description of each test case contains a string consisting of n

digits — the number that you have initially. It is guaranteed that the number does not contain leading zeros.

It is guaranteed that the sum of n
for all test cases does not exceed 2⋅105

.
Output

For each test case, output a string consisting of n+1
digits — the maximum possible number that can be obtained.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//#endif
    int t;
    int n;
    char d;

    cin >> t;

    while(t > 0) {
        cin >> n >> d;
        int num_digits = n + 1;

        char number[num_digits];

        cin >> number;
        int index = -1;
        for(int i=0; i < n; i++) {
            if(d >= number[i]) {
                index = i;
                break;
            }
            else {
                number[n] = d;
            }
            
        }
        
        for(int i=n-1;index != -1 && i >= index; i-- ) {
            number[i+1] = number[i];
        }
        if(index != -1) {
        number[index] = d;
        }
        cout << number;

        t--;
    }

}