#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;

  string card;

  for(int i = 0;i < 5;i++){
    cin >> card;

    if(card[0] == s[0] || card[1] == s[1]){
      cout << "YES" << endl;
      return 0;
    }
    
  } 

  cout << "NO" << endl;

  return 0;
}
