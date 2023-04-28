#include<bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    int score=0;
    
    int amazing = 0;
    cin >> score;
    int MAX=score;
    int MIN=score;
    n--;

    while(n--) {
        cin >> score;
        cin.ignore(1,' ');
        if(score > MAX) {
            MAX = score;
            amazing++;
        }
        if(score < MIN) {
            MIN = score;
            amazing++;
        }
    }

    cout << amazing;
    
}