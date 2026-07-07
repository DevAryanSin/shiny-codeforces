#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;
    vector<char> num;

    for(auto it : s){
        if(isdigit(it)) num.push_back(it);
    }

    sort(num.begin(), num.end());

    for(int i = 0;i < num.size();i++){
        cout << num[i];
        if(i != num.size() -1) cout << "+" ;
    }



    return 0;
}