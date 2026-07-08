#include <bits/stdc++.h>

using namespace std;

int main(){

  int len;
  cin >> len;

  string t;
  cin >> t;
  
  string st;
  int i = 0;
  int jump = 1;

  while( i < len){
    st += t[i];
    i+= jump;
    jump++;
  }
  cout << st << endl;
  
  return 0;
}
