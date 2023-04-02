/*
A. Beautiful Year
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.
Input

The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.
Output

Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.
*/

#include<bits/stdc++.h>
using namespace std;

string beautiful_year(int year) {
    string year_string = to_string(year);
    for(int i=0; i < year_string.length(); i++) {
        for(int j = i+1; j < year_string.length(); j++) {
            if(year_string[i] == year_string[j]) {
                return beautiful_year(year + 1);
            }
        }
    }

    return year_string;

}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int input_year;
cin >> input_year;
cout << beautiful_year(input_year + 1);


}