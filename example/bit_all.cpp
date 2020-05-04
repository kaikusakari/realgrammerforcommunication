#include <bits/stdc++.h>
using namespace std;

int main () {
    for(int i = 0 ; i< (1<<5); i++) {
        int tmp = 0;
        for(int j = 0; j<5; j++) {
            if(i & (1<<j)) {
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
}
