#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  cin >> s;
  for(auto it : s){
    if(it == 'a') first_a = true;
    else if(it == '@') symbol = true;
    else if(it == 'a' && symbol == true && first_a == true)
  }
}
