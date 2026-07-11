#include <iostream>


using namespace std;

int main(){
  int n;
  cin >> n;

  for(int i = 0; i <= 2 * n; i++){
    int k;
    if(i <= n) k = i;
    else k = 2 *  n - i;

    for(int j = 0;j < n-k;j++){
      cout << "  ";
    }

    for(int j =0;j <= k;j++){
      if(j!=0) cout << " ";
      cout << j;
    }
    for(int j = k - 1; j >= 0;j--){
      cout << " " << j;
    }
    cout << endl;
  }


  return 0;
}
