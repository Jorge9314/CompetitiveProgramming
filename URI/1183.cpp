#include <bits/stdc++.h>

using namespace std;

int main(){
	double sum=0, v[12][12];
	char tp;
	cin >> tp;
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			cin >> v[i][j];
		}
	}

	for(int i=0; i<12; i++){
        for(int j=1; i+j<12; j++){
		sum += v[i][i+j];
        }
	}
	if(tp == 'S'){
		cout << fixed << setprecision(1) << sum << endl;
	}else{
		sum /= 12;
		cout << fixed << setprecision(1) << sum << endl;
	}
	return 0;
}
