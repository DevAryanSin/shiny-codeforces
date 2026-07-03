#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){

        string str;
        cin >> str;

        int len = str.length();
        
        if(len > 10){
            string new_str;
            new_str.append(1,str[0]);
            new_str.append(to_string(len-2));
            new_str.append(1,str[len-1]);
            
            cout << new_str << endl;
            
        }else{
             cout  << str << endl;
        }
    }
    return 0;
}