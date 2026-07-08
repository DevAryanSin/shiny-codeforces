#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  
  int height = 0;
  int level = 1;

  while(true){

    int cubes = level * (level + 1)/2;

    if(n < cubes) break;

    n-= cubes;
    height++;
    level++;

  }
  
  cout << height << endl;

  return 0;
}
