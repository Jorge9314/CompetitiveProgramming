#include <bits/stdc++.h>

using namespace std;
#define lli long long int

unsigned t0, t1;

int fibbonacy(int n){
  if(n == 0) return 0;
  if(n == 1) return 1;
  return fibbonacy(n - 1) + fibbonacy(n - 2);
}

lli fibb(int x){
  t0 = clock();
  // Code to execute
  lli *fibb  = new lli[x+1];
  fibb[0] = 0;
  fibb[1] = 1;
  for (int i=2; i<x+1; i++)
      fibb[i] = fibb[i-1] + fibb[i-2];
  t1 = clock();
  return fibb[x];
}

lli fibb2(int x){
  //t0 = clock();
  lli fibfirst = 0;
  lli fibsecond = 1;
  for (int i=2; i<x+1;i++){
    fibsecond = fibfirst+fibsecond;
    fibfirst = fibsecond - fibfirst;
  }
  //t1 = clock();
  return fibsecond;
}

int main(){
  int x;
  cin >> x;
  cout << fibbonacy(x) << endl;
  cout << fibb(x) << endl;
  cout << fibb2(x) << endl;
  double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time << endl;
  return 0;
}
