#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, x, y;
  cin >> n >> x >> y;
  
  vector<int> arr(n);

  for(int i = 0;i < n;i++){
    cin >> arr[i];
  }

  for(int i =0;i < n;i++){
    bool ok = true;

    for(int j = max(0,i-x);j < i;j++){
      if(arr[j] < arr[i]){
        ok = false;
        break;

      }
    }

    if(ok){
      for(int j = i + 1;j <= min(n-1,i+y);j++){
        if(arr[j]< arr[i]){
          ok = false;
          break;
        }
      }
    }

    if(ok){
      cout << i + 1;
      return 0;
    }
  }
  
}


