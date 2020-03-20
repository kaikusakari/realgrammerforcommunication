#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int in;
    cin >> in;
    vector<vector<int> > list(in);
    vector<vector<vector<int> > > residence(4 , vector<vector<int> >(3 ,vector<int>(10)));

    for(int i = 0; i < in ; i++) {
        int b,f,r,v;
        cin >> b >> f >> r >> v;
        residence[b-1][f-1][r-1] += v;
    }

    for(int i = 0; i < residence.size();i++) {
        if(i != 0 )cout << "####################" << endl;
        for(int j = 0; j < residence[i].size();j++) {
            for(int k = 0; k < residence[i][j].size(); k++) {
                cout << " " << residence[i][j][k];
            }
            cout << endl;
        }
    }
    return 0;
}
