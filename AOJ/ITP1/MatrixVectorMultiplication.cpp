#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > vec(n , vector<int>(m));
    vector<int> b(m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < m; j++) {
            sum += vec[i][j] * b[j];
        }
        cout << sum << endl;
    }

    return 0;
}
