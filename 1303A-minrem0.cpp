#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

  while(t--){
    string x;
    cin >> x;
    bool isOne = false;
    int count =0 ;
    int tempZ = 0;
    for(int i = 0; i <x.size();i++){
    
      if(x[i] == '1'){
        isOne = true;
        count += tempZ;
        tempZ = 0;
      }else if(isOne == true && x[i] == '0')tempZ++;
    }
    cout << count << endl;
      //  if(x[i] == '1' && isOne == false)isOne = true;
      //    if(x[i] == '0' && isOne == true ) count++;
      //      if((x[i] == '1' && count != 0) || i == (x.size() -1 )) isOne = false;
  }

  
  return 0;
}
