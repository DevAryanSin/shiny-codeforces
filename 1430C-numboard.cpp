#include <bits/stdc++.h>

using namespace std;

int main(){

  int t;
  cin >> t;

  while(t--){
    int n;
    cin>> n;

    vector<pair<int,int>> pairs;

    int curr = n;

    pairs.push_back({n,n-1});
    curr = (n + (n - 1) + 1)/ 2;

    for(int i =n-2;i >=1;i--){
      pairs.push_back({curr,i});
      curr = (curr + i + 1) / 2;
      
    }
    cout << curr << endl;

    for(auto [a,b] : pairs){
      cout << a << " " << b << endl;
    }

  }

  return 0;
}
