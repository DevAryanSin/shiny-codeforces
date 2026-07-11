#include <bits/stdc++.h>


using namespace std;

int main(){

  int pages;
  cin >> pages;
  int day = 0;
  int pages_left = pages;
  
  
  int arr[7];
  for(int i = 0;i < 7; i++){
    cin >> arr[i];
  }

  while(true){
    pages_left -= arr[day];

    if(pages_left <= 0){
      day++;
      cout << day << endl;
      return 0;
    }

    day = (day + 1) % 7;
  }


  
  return 0;
}
