#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int x = 0;
    while(t--){
        string str;
        cin >> str;
        if(str.contains("++")) x++;
        if(str.contains("--")) x--;

    }
    cout << x;

    return 0;
}