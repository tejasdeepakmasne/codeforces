#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    int num_students;
    int turns;
    int i{1};
    

    cin >> num_students >> turns;
    char queue[50];

    cin >> queue;
    

    while(turns !=0) {
        for(i=1;i < num_students; i++) {
            if(queue[i]==71 && queue[i-1]==66) {
               char temp;
               temp = queue[i];
               queue[i] = queue[i-1];
               queue[i-1] = temp;
                break;
                
            }
        }

        turns--;
    }

    cout << queue;
}