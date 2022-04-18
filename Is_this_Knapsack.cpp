#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cout<<x<<"\n"
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,c,k;cin>>n>>c>>k;
        ll a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ll sum = 0;
            ll count = 0;
            for(int j = i; j < n; j++){
                sum += a[j];
                count++;
                 if(sum >= k && sum <= c) ans = max(ans, count);
                 else if(sum>c) break;
            }
            
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}
