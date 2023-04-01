#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int games;
    cin >> games;

    char wins[games];
    int anton{0};
    int danik{0};
    cin >> wins;

    for(int i=0; i < games; i++) {
        if(wins[i]=='A'){
            anton++;
        }
        else{
            danik++;
        }
    }

    if(anton > danik) {
        cout << "Anton";
    }
    else if(anton == danik) {
        cout << "Friendship";
    }
    else {
        cout << "Danik";
    }
}