#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int s=0,w=0;
	while(t--){
		int x,y;
		cin >> x >> y;
		if(x == y){
			cout << "Sherlock's Shot" << "\n";
			s++;
		}
		double_t c = (double_t)3/2;
		if(x == (c*y) || y == (c*x)){
			cout << "Watson's Shot" << "\n";
			w++;
		}
	}
	if(s == w){
		cout << "Bet is tied" << "\n";
		cout << "And both shoots the mastermind" << "\n";
	}
	else if(s > w){
		cout << "Sherlock's wins the Bet" << "\n";
		cout << "he will shoots the mastermind" << "\n";
		
	}
	else if(s < w){
		cout << "Watson's wins the Bet" << "\n";
		cout << "he will shoots the mastermind" << "\n";
	}
	return 0;
}
