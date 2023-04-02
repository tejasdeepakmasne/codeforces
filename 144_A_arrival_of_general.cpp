/*
A. Arrival of the General
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper. Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.

By the military charter the soldiers should stand in the order of non-increasing of their height. But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However, the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line has the maximum height and the last soldier has the minimum height. Please note that the way other solders are positioned does not matter, including the case when there are several soldiers whose height is maximum or minimum. Only the heights of the first and the last soldier are important.

For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct and the sequence (4, 3, 1, 2, 2) wrong.

Within one second the colonel can swap any two neighboring soldiers. Help him count the minimum time needed to form a line-up which the general will consider correct.
Input

The first input line contains the only integer n (2 ≤ n ≤ 100) which represents the number of soldiers in the line. The second line contains integers a1, a2, ..., an (1 ≤ ai ≤ 100) the values of the soldiers' heights in the order of soldiers' heights' increasing in the order from the beginning of the line to its end. The numbers are space-separated. Numbers a1, a2, ..., an are not necessarily different.
Output

Print the only integer — the minimum number of seconds the colonel will need to form a line-up the general will like.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num;
    cin >> num;

    int heights[num];

    for (int i = 0; i < num; i++)
    {
        cin >> heights[i];
        cin.ignore(1, ' ');
    }

    int max, min;
    int max_index, min_index;
    int total_swaps = 0;

    max = heights[0];
    for (int i = 0; i < num; i++)
    {
        if (heights[i] > max)
        {
            max = heights[i];
            max_index = i;
        }
    }
    //  cout << max << "" << max_index << "\n";
    int i = max_index;
    while (heights[0] != max)
    {
        int temp = heights[i - 1];
        heights[i - 1] = heights[i];
        heights[i] = temp;
        total_swaps++;
        i--;
    }
   // cout << total_swaps << "\n";

    // for (int j = 0; j < num; j++)
    // {
    //     cout << heights[j] << " ";
    // }
    min = heights[0];
    
    for (int k = 0; k < num; k++)
    {
        if(heights[k] <= min)
        {
            min = heights[k];
            min_index = k;
        }
    }
   // cout << min_index << "\n";

    //int k = min_index;
    
    total_swaps = total_swaps + (num - min_index - 1);

    cout << total_swaps;
}