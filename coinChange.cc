#include<bits/stdc++.h>

using namespace std;

int coinChange(int n, int d){
  if(n < 0)
    return 0;
  else if(n == 0)
    return 1;
  else{
    int sum = 0;
    switch(d){
      case 25: sum += coinChange(n-25, 25);
      case 10: sum += coinChange(n-10, 10);
      case 5: sum += coinChange(n-5, 5);
      case 1: sum++;
      default: break;
    }
    return sum;
  }
}

int main(){
  int x, y;
  cin >> x >> y;
  cout << coinChange(x, y) << endl;
  return 0;
}
