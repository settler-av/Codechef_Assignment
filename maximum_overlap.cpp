#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void overlap(vector<pair<ll,ll>> v){
	ll ans = 0;
	ll count = 0;
	vector<pair<ll, char>> data;
	for (ll i=0;i<v.size();i++){
		data.push_back({v[i].first,'x'});
		data.push_back({v[i].second,'y'});
	}
	sort(data.begin(),data.end());
	for (ll i=0;i<data.size();i++){
		if (data[i].second=='x'){
			count++;
        }
		if (data[i].second == 'y'){
			count--;
        }
		ans = max(ans, count);
	}
	cout << ans << endl;
}
int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        ll m;
        cin >> m;
        vector<pair<ll,ll>> A;
        for(ll i=0;i<n;i++){
            ll l,r;
            cin >> l >> r;
            A.push_back({l,r});
        }
        overlap(A);
    }
    return 0;
}
