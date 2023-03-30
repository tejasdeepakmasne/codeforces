#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;

    int vectors[n][3];

    for(int i=0; i < n; i++) {
        cin >> vectors[i][0] >> vectors[i][1] >> vectors[i][2] ;

    }

    int x_sum {0};
    int y_sum {0};
    int z_sum {0};

    for(int i=0; i < n; i++) {
        x_sum = x_sum + vectors[i][0];
        y_sum = y_sum + vectors[i][1];
        z_sum = z_sum + vectors[i][2];
    }

    if(x_sum == 0 && y_sum == 0 && z_sum == 0) {
        cout << "YES";

    }
    else {
        cout << "NO";
    }

}