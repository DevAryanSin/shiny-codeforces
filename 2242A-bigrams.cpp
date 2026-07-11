#include <iostream>


using namespace std;

int main(){
 int t;
 cin >> t;

 while(t--){
  int k;
  cin >> k;

  bool status = false;
  int occ = 0;
  for(int i =0 ;i < k ;i++){
    int x;
    cin >> x;
    if(x >= 3) status = true;
    if(x >= 2) occ++;

  }
  if( status  || occ >= 2) cout << "YES" << endl;
  else cout << "NO" << endl;
 }
  return 0;
}
