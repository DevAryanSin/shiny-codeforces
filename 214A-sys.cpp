#include <bits/stdc++.h>

using namespace std;

int main(){
  int x , y;
  cin >> x >> y;

  int res =0;


  for(int a = 0; a <= 1000; a++){
    for(int b =0; b <= 1000; b++){
      if(a*a + b == x && a +b*b == y){
        res++;
      }
    }
  }
  //for(int a= 0; a * a <=x;a++){
    //int b = x -a * a;
    //if(b >= 0 && a + b *b  == y) res++;
  //}

  cout << res << endl;

  return 0;

}
