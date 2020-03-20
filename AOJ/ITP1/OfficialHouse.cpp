#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int in;
    cin >> in;
    vector<vector<int> > list(in);
    vector<vector<int> > residence(12, vector<int>(10));

    for(int i = 0; i < in ; i++) {
        int b,f,r,v;
        cin >> b >> f >> r >> v;

        if(b == 1) residence[0 + f - 1][r - 1] += v;
        if(b == 2) residence[2 + f][r - 1] += v;
        if(b == 3) residence[5 + f][r - 1] += v;
        if(b == 4) residence[8 + f][r - 1] += v;
    }

    for(int i = 0; i < residence.size();i++) {
        for(int j = 0; j < residence[i].size();j++){
            cout << " " << residence[i][j];
        }
        if((i + 1) % 3 == 0 && i != 0 && i < 10) { 
            cout << endl;
            cout << "####################" << endl;
        } else {
            cout << endl;
        }
    }
    return 0;
}
