#include<bits/stdc++.h>

using namespace std;

int strmatch(string s, string t){

  int table[s.size()+1][t.size()+1];
  int i, j;
  for(i=0; i< s.size()+1; i++) table[i][0] = i;
  for(i=0; i< t.size()+1; i++) table[0][i] = i;

  for(i=1; i<s.size()+1; i++)
    for(j=1; j<t.size()+1; j++){
      if(s[i-1] == t[j-1])
        table[i][j] = table[i-1][j-1];
      else
        table[i][j] = 1 + min(table[i-1][j-1], min(table[i-1][j], table[i][j-1]));
    }
  return table[s.size()][t.size()];
}

int main(){
  string a, b;
  cin >> a >> b;
  cout << strmatch(a, b) << endl;
  return 0;
}
