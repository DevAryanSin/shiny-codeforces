#include <iostream>

using namespace std;


int main(){

  int t;
  cin >> t;

  while(t--){
    int x;
    cin >> x;

    int digit = x % 10;
    
    string st = to_string(x);
    int len = st.size();

    int ans = (digit-1) * 10 + len* (len + 1) / 2;
    cout << ans << endl;
  }

  return 0;
}
