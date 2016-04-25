#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(cin >> n){
    for(int i=0; i<n; i++){
      for(int j=0, t=n-1; j<n, t>=0; j++, t--){
        if(n%2 == 0){
          if(i == j){
            cout << 1;
          }
          if(i == t){
            cout << 2;
          }
        }else{
          if(i == j and i == t){
            cout << 2;
          }else if(i == j){
            cout << 1;
          }else if(i == t){
            cout << 2;
          }
        }
        if(i != j and i != t){
          cout << 3;
        }
      }
      cout << endl;
    }
  }
return 0;
}
