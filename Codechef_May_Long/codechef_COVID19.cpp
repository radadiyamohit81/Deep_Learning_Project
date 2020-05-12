#include<bits/stdc++.h>
using namespace std;
void process(){
	int n,no;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin >> no;
		v.push_back(no);
	}
	int min=1,prd=1;
	vector<int> di;
	for(int i=0;i<n-1;i++){
		int d = (v[i+1]-v[i]);
		if(d >= 3){
			if(min >= 1)
			{
				di.push_back(min);
			}
			min=1;
			continue;
		}
		else if(d == prd)
		{
			min++;
		} 
		else
		{
			prd = d;
			min++;
		}
	}
	di.push_back(min);
	sort(di.begin(),di.end());
	cout << di[0] <<" "<< di[di.size()-1];
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	for(int i=1;i<=t;i++){
		cout << "Case #" << i << ": ";
		process();
		cout << "\n";
	}
	return 0;
}
