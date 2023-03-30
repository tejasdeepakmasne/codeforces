#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num_students;
    int turns;
    int i{1};
    

    cin >> num_students >> turns;
    char queue[50];

    cin >> queue;
    

    while(turns !=0) {
        for(i=1;i < num_students; i++) {
            if(queue[i]==71 && queue[i-1]==66) {
                queue[i] = 66;
                queue[i-1] = 71;
                break;
                
            }
        }

        turns--;
    }

    cout << queue;
}