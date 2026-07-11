#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin >> n;

  vector<long long> arr(n);

  for(int i =0;i < n; i++){
    cin >> arr[i];
  }

  long long last = INT_MAX;
  long long ans = 0;

  for(int i = n-1;i >=0 ;i--){
    last = min(arr[i],last-1);
    if(last < 0) last = 0;
    ans += last;
  }

  cout << ans << endl;

  return 0;
}
