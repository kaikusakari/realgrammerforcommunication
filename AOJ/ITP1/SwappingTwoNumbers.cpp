#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 3000;
    int tmp = 0;
    vector<int> vx(N);
    vector<int> vy(N);
    for (int i = 0; i <= N; i++) {
        int x,y;
        cin >> x >> y;
        if (x == 0 && y == 0){ 
            tmp = i - 1;
            break;
        }
        vx.at(i) = x;
        vy.at(i) = y;
    }
  for (int i = 0; i <= tmp; i ++){
      if (vx[i] > vy[i]) {
          cout << vy[i] << ' ' << vx[i] << endl;
      } else {
          cout << vx[i] << ' ' << vy[i] << endl;

      }
  }
  
  return 0;
}
