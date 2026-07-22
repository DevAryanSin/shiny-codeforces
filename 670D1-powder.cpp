#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k;

  cin >> n >> k;

  vector<int> a(n),b(n);
  for(int i =0; i  < n;i++){
    cin >> a[i];
  }

  for(int i =0;i < n;i++){
    cin >> b[i];
  }

  int ans = 0;

  while(true){
    int need = 0;

    for(int i =0;i < n ;i++){
      if(b[i] >= a[i]){
        b[i] -= a[i];
      }else{
        need += a[i]-b[i];
        b[i] = 0;
      }
    }

    if(need > k) break;
    k-= need;
    ans++;
  }

  cout << ans << endl;
  return 0;
}
