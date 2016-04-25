#include <bits/stdc++.h>

using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	if(a >= (b+c)){
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	if(a*a = (b*b + c*c)){
		cout << "TRIANGULO RETANGULO" << endl;
	}
	if(a*a > (b*b + c*c)){
		cout << "TRIANGULO OBTUSANGULO" << endl;
 	}
 	if(a*a < (b*b + c*c)){
 		cout << "TRIANGULO ACUTANGULO" << endl;
 	}
 	if(a == b == c){
 		cout << "TRIANGULO EQUILATERO" << endl;
 	}
 	if(a==b and a!=c || b==c and b!=a || a==c and a!=b){
 		cout << "TRIANGULO ISOSCELES" << endl;
 	}
	return 0;
}