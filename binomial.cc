#include<bits/stdc++.h>

using namespace std;

int binomial_coeficient(int n, int k){ //Brute Force
  if(n == 0 || n == k)
    return 1;
  else
    return binomial_coeficient(n-1,k-1) + binomial_coeficient(n-1, k);
}

int bin_coef(int n, int k){ //Dinamic Programming
  int pascaltri[n+1][n+1];
  for(int i=0; i<n+1; i++){
    pascaltri[i][0] = 1;
    pascaltri[i][i] = 1;
  }
  for(int i=2; i<n+1; i++)
    for(int j=1; j<i; j++)
      pascaltri[i][j] = pascaltri[i-1][j-1] + pascaltri[i-1][j];
  return pascaltri[n][k];
}

int main(){
  int x, y;
  cin >> x >> y;
  cout << bin_coef(x, y) << endl;
  cout << binomial_coeficient(x, y);
  return 0;
}
