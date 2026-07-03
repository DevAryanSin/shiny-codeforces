#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        int len = str.length();

        if( len > 10){
            string new_str;

            new_str += str[0];
            new_str += to_string(len - 2);
            new_str += str.back();

            cout << new_str << endl;
        }else cout << str << endl;
    }
}