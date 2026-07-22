#include <bits/stdc++.h>

using namespace std;

int main(){
  string rec;
  cin >> rec;

  long long nb,ns,nc;
  cin >> nb >> ns >> nc;

  long long pb,ps,pc;
  cin >> pb  >>  ps >> pc;

  long long r;
  cin >> r;

  long long  needB = 0, needS = 0, needC = 0;


  for(auto i : rec){
    if(i == 'B') needB++;
    else if(i == 'S') needS++;
    else needC++;
  }

  long long low = 0, high = 1e13;
  long long res = 0;

  while(low <= high){
    
    long long mid = (low + high)/ 2;

    long long buyB = max(0LL, needB* mid -nb);
    long long buyC = max(0LL, needC* mid -nc);
    long long buyS = max(0LL, needS*mid - ns);

    long long cost = buyB * pb + buyC * pc + buyS * ps;

    if(cost <= r){
      res = mid;
      low = mid + 1;

    }else{
      high = mid-1;
    }
  }
    cout << res << endl;
  return 0;
}
