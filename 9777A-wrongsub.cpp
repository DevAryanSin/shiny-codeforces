#include <iostream>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    while(k){

        int ld = n %10;
        if(ld == 0) n/= 10;
        if(ld != 0) n--;

        k--;

    }

    cout << n << endl;
    return 0;
}