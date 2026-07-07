#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;

    for(int i = 0;i < str.size(); i++){
        int digit = str[i] - '0';
        int inv = 9 - digit;

        if( digit > inv){
            if(i == 0 &&  inv == 0) continue;
            str[i] = inv + '0';
        }
    }
    cout << str << endl;

    return 0;
}