#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;cin >> t;

  while(t--){
    long long a, b, c; // a - shop1 a dollars, b - shop2 amount of boxes for c dollars
    cin >> a >> b >> c;

    if( a < c)cout << "1" << " ";
    else cout << "-1" << " ";

    if( a * b > c) cout << b << endl;
    else cout << "-1" << endl;


  }

  return 0;
}
