#include <bits/stdc++.h> 

using namespace std;

int main(){

  int t;
  cin >> t;

  while(t--){
    int n;cin >> n;
    string s;
    cin >> s;
    int len = 0;
    int count = 0;
    int i =0;
    int j = n-1;
    int time = 0;
    while(n--){
      if(s[i] == '#'){
        len++;
        if(len >= 2 && (n == 1 || n == 2)){
          time++;
          len =0;
          ans = max(time,ans);
        }
      }else if(s[j] == '#'){
        len++;
        if(len >= 2 && (n==1||n==2)){
          time++;
          len = 0;
          ans = max(time,ans);
        }
      }

      i++;
      j--;




      
    }
  }
}
