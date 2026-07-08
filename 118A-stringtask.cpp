#include <bits/stdc++.h>

using namespace std;

int main(){

  string st;
  cin >> st;

  for(char i : st){
    i = tolower(i);

    if(i != 'a' &&  i != 'e' && i != 'o' && i != 'u' && i != 'i' && i != 'y') cout << "." << i;
  }

 cout << endl;
  return 0;
}
