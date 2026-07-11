#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    vector<int> arr(n+1);

    for(int i = 1; i < n;i++){
      cin >> arr[i];
    }

    int curr_pos = 1;

    while(curr_pos < t){
      curr_pos += arr[curr_pos];

      if(curr_pos == t){ 
        cout << "YES" << endl; 
        return 0;
      }
      
    }
    cout << "NO" << endl;


  return 0;
}
