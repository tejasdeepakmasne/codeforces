#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;

    cin >> t;
   long int n,d,index;
    while(t--) {
        cin >> n >> d;
        int flag = 0;
        char num[n];
        int add_one_n = n + 1;
        char final_num[add_one_n] = {};

        cin >> num;

        for(int i=0; i < n ; i++) {
            if(d >= num[i]) {
                index = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1) { 
            for(int i=0; i < n; i++) {
                if(i < index) {
                    final_num[i] = num[i];
                }
                else if(i == index) {
                    final_num[i] = d;
                }
                else {
                    final_num[i+1] = num[i];
                }
            }
        }
        else {
            for(int i = 0; i < n; i++) {
                final_num[i] = num[i];
            }
            final_num[n] = d;
        }

        cout << final_num << "\n";
    }

}