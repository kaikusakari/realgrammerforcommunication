#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 10000;
    int tmp = 0;
    vector<int> vec(N);
    for (int i = 0; i <= N; i++) {
        int value;
        cin >> value;
        if (value == 0){
            tmp = i - 1;
            break;
        }
        vec.at(i) = value;
    }
  for (int i = 0; i <= tmp; i ++){
      cout << "Case " << i + 1 << ": " << vec[i] << endl;
  }
  
  return 0;
}
