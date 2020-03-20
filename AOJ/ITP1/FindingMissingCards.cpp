#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int in;
    cin >> in;
    vector<int> slist(13);
    vector<int> clist(13);
    vector<int> hlist(13);
    vector<int> dlist(13);
    for(int i = 0; i < in;i++) {
        char tmp_suit;
        int tmp_card;
        cin >> tmp_suit >> tmp_card;
        if(tmp_suit == 'S') slist[tmp_card] = tmp_card;
        if(tmp_suit == 'C') clist[tmp_card] = tmp_card;
        if(tmp_suit == 'H') hlist[tmp_card] = tmp_card;
        if(tmp_suit == 'D') dlist[tmp_card] = tmp_card;
    }

    for(int j = 0; j < 4; j++) {
        char tmp_suit;
        for(int i = 1; i <= 13; i++) {
            if(j == 0 && slist[i] == 0) cout << "S " << i << endl;
            if(j == 1 && hlist[i] == 0) cout << "H " << i << endl;
            if(j == 2 && clist[i] == 0) cout << "C " << i << endl;
            if(j == 3 && dlist[i] == 0) cout << "D " << i << endl;
        }
    }
    return 0;
}
