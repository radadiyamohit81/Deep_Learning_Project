#include<bits/stdc++.h>
#include<bitset>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
#define drep(i,a,b) for(int i=a; i>b; i--)
#define mod 1000000007

typedef long long int ll;
ll x, y, l, r;

ll conv(bitset<64>&arr, int index)
{
	ll ans = 0;
	for(int i=0;i<index;i++)
	{
			ans += (1LL << i);
	}
	for(int i=index+1;i<64;i++)
	{
		if(arr[i] == 1) ans+=(1LL << i);
	}
	return ans;
}
int solve(bitset<64>& arr, int index)
{
	ll output = 0;
	int j = -2;
	for ( int i = index; i >= -1; i--)
	{
		if(i > 0)if(arr[i] == 0) continue;
		ll ans1 = conv(arr, i);
		ll ans = (x & ans1) * (y & ans1);
		if(ans > output){
			output = ans;
			j = i;
		}
	}
	return j;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		cin >> x >> y >> l >> r;
		bitset<64>a(l);
		bitset<64>b(r);
		bitset<64>c(x);
		bitset<64>e(y);
		bitset<64>output(r);
		int index = -1;
 
		for(int i = 63; i >= 0; --i)
		{
			if(b[i] == 1 && a[i] == 0){
				index = i;
				break;
			}
 
		}
		if(index == -1){
			cout << l << endl;
		}
		else if(x == 0 || y == 0){
			cout << l << endl;
		}
		else{
			int f = solve(output, index);
			if (f == -1) {
				cout << output.to_ulong()<< endl;
			}
			else if(f == -2){
				cout << l << endl;
			}
			else{
				output[f] = 0;
				if (f == index){
					bool bl = false;
					for ( int i = f-1; i >= 0; --i){
						if(c[i] == 1 || e[i] == 1) output[i] = 1;
						else output[i] = 0;
						if(bl) continue;
						if (output[i] == 1 && a[i] == 0) bl = true;
						else output[i] = a[i];
					}
				}
				else{
					for ( int i = f-1; i >= 0; --i){
						if(c[i] == 1 || e[i] == 1) output[i] = 1;
						else output[i] = 0;
					}
				}
				ll ans = conv(output, -1);
				cout << ans << endl;
			}
		}
	}
	return 0;
}
