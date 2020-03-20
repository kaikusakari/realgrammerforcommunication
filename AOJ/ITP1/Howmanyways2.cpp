#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int cnt;
    vector<vector<int> > list(101, vector<int>(2));
    for(int i = 0; i < list.size(); i++) {
        cin >> list[i][0] >> list[i][1];
        if(list[i][0] == 0 && list[i][1] == 0) {
            cnt = i;
            break;
        }
    }

    for(int i = 0; i < cnt; i++) {
        int res = 0;
        for(int j = 1; j <= list[i][0]; j++) {
            for(int k = j + 1; k <= list[i][0]; k++) {
                if (list[i][1] - (j + k) > k && list[i][1] - (j + k)  <=list[i][0]  ) res += 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
