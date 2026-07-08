#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int x;
    cin >> x;
    
    
    int digit = x % 10;
    int positional_value = 0;
    int i = 1;
    while(x){
      positional_value += i;
      x /= 10;
      i++;
    }

    int ans = (digit-1) * 10 + positional_value;
    cout << ans << endl;
  }


  return 0;
}
