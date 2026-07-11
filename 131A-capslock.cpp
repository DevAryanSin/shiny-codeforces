#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;

  int si = s.size();

  bool shouldToggle = true;

  for(int i = 1;i < si;i++){
    if(islower(s[i])){
        shouldToggle = false;
        break;
    }
  } 

  if(shouldToggle == true){
    for(int i =0;i < si; i++){
    if(islower(s[i])) s[i] = toupper(s[i]);
    else s[i] = tolower(s[i]);
    }
  }

  cout <<  s<< endl;

  return 0;
}
