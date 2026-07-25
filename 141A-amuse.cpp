#include <bits/stdc++.h>

using namespace std;

int main(){
  string a, b, c;
  cin >> a >> b >> c;

  int freq[26] = {0};

  for(auto it : a){
    freq[it - 'A']++;
  }

  for(auto it : b){
    freq[it - 'A']++;
  }

  for(auto it : c){
    freq[it - 'A']--;
  }

  for(int i =0;i < 26; i++){
    if(freq[i] != 0){
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";
  return 0;
}
