#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;cin >>t;

  while(t--){
    int x,y;
    cin >> x >> y;
    
    if(x <= 2) cout << 1 << endl;
    else cout <<  (x-3)/y + 2 << endl;
  }

  return 0;
}
