#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 10000;
    vector<int> vec(N);
    int tmp = 0;
    for (int i = 0; i <= N; i++) {
        int tmp_a;
        string tmp_ope;
        int tmp_b;
        cin >> tmp_a >> tmp_ope >> tmp_b;

        if (tmp_ope == "?"){
            tmp = i;
            break;
        }
        
        if (tmp_ope == "+") vec.at(i) =  tmp_a + tmp_b;
        if (tmp_ope == "-") vec.at(i) =  tmp_a - tmp_b;
        if (tmp_ope == "*") vec.at(i) =  tmp_a * tmp_b;
        if (tmp_ope == "/") vec.at(i) =  (double) tmp_a / (double)tmp_b;
    }
    for (int i = 0 ; i < tmp; i++) {
        cout << vec[i] << endl;
    }
    return 0;
}
