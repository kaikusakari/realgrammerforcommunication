#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> res(2);
    cin >> res[0] >> res[1] >> res[2];

    for(int i = res.size(); i>0; i--) {
        for(int j = 1; j<=i; j++) {
            if(res[j-1] > res[j]) {
                int tmp = res[j-1];
                res[j-1] = res[j];
                res[j] = tmp;
            }
        }
    }

    cout << res[0] << " " << res[1] << " " << res[2] << endl;
}
