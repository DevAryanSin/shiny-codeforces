#include <bits/stdc++.h>

using namespace std;

int main(){

  int t;
  cin >> t;

  while(t--){

  int n;
  cin >> n;
  string s;
  cin >> s;
  bool count3 = false;
  int count = 0;
  for(int i =0;i < n;i++){
    if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.' && i + 1 < n && i +2 < n){
      count3 = true;
      break;
    }
    if(s[i] == '.') count++;
  }
  if(count3) cout << 2 << endl;
  else cout << count << endl;
  }
  return 0;
}
