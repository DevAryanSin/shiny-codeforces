#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    string st;
    for(int i = 0;i < t;i++){
        cin >> n;
        if(n == 1){
            st = "HARD";
            break;
            }
    }
    if(st == "HARD") cout << "HARD" << endl;
    else cout << "EASY" << endl;
    


    return 0;
}