#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 10000;
    vector<int> vh(N);
    vector<int> vw(N);
    int tmp = 0;
    for (int i = 0; i < N; i++) {
        int h,w;
        cin >> h >> w;
        if (w == 0 && h == 0) {
            tmp = i;
            break;
        }
        vh.at(i) = h;
        vw.at(i) = w;
    }

    for (int i = 0; i <= tmp; i++) {
        if (i > 0) cout << endl;
        for (int j = 0; j < vh[i]; j++) {
            for (int z = 0; z < vw[i]; z++) {
                if (z == 0 
                || j == 0
                || z == vw[i] - 1
                || j == vh[i] - 1) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            }
            cout << endl;
        }
    }
    return 0;
}
