#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  int lcount =0, ucount = 0;
  for(auto it : s){
    if(islower(it)) lcount++;
    else if(isupper(it)) ucount++;
  }

  if(ucount > lcount){
    for(auto &i : s){
      i = toupper(i);
    }
  }else{
    for(auto &i : s){
      i = tolower(i);
    }
  }
  cout << s << endl;

  return 0;
}
