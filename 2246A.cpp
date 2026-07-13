#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  
  
  while(t--){
  int n;
  cin >> n;

  int counter = 0;
  
  int arr[n];
  for(int i =0;i<n;i++){
    arr[i] = i+1;
  }
  for(int i = 0; i < n;i+=2){
    swap(arr[i],arr[i+1]);
  }

  for(int i =0;i < n;i++){
    cout << arr[i] << " ";
  }

  cout << endl;
  }
  return 0;
}

// each index- 3 operations 
// - i . pi , 0, + i.pi
// make everything even so that i.pi is even
