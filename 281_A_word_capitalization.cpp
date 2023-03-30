/*
A. Word Capitalization
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.
Input

A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.
Output

Output the given word after capitalization.
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
    char word[1000];
    cin >> word;
    
    if(word[0] > 96) {
        word[0] = word[0] - 32;
        cout << word;
    }
    else {
        cout << word;
    }

}
