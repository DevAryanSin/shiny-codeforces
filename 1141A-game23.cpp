#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  cin >> n >> m;

  int count = 0;
  
  if( m % n != 0){
    cout << "-1" << endl;
    return 0;
  }
  long long x = m / n;

  while( x % 2 == 0){
    x /= 2;
    count++;
  }

  while(x % 3 == 0){
    x /= 3;
    count++;
  }
  if(x != 1) cout << "-1" << endl;
  else cout << count << endl;


  return 0;
}
