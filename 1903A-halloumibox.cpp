#include <bits/stdc++.h>

using namespace std;

int main(){
  int t; cin >> t;

  while(t--){
    int n,k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for(int i =0;i < n;i++){
      cin >> arr[i];
    }
    vector<int> ar = arr;
    sort(ar.begin(), ar.end());

    if(ar == arr || k  > 1) cout << "YES" << endl;
    else cout << "NO" <<endl;
  }

  return 0;
}
