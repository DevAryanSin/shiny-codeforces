#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >>t;

  while(t--){
    int n;
    cin >> n;

    int odd = 0, even =0,sum = 0;

    for(int i =0;i <n;++i){
      int x; 
      cin >> x;
      sum += x;

      if(x % 2 != 0) odd++;
      else even++;
    }

    if(sum % 2 != 0) cout << "YES" << endl;
    else if(odd > 0 && even > 0) cout << "YES" << endl;
    else cout << "NO" << endl;

  }
  return 0;
}
