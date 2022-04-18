#include <bits/stdc++.h>
#define ll long long int
#define endl "\n" 
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define in(a)             for(int &i:a) cin>>i
#define out(v)            for(auto it: v) cout<<it<<" "; cout<<"\n"
#define all(x)            (x).begin(),(x).end()
using namespace std;


void solve(){

   int n;
   cin>>n;
   vector<int> v(n),v2(n);
   in(v);
   in(v2);
   int ans=0;
   rep(i,0,n){
      map<int,int> m1,m2;
      rep(j,i,n){
         m1[v[j]]++;
         m2[v2[j]]++;
         if(m1==m2) ans=max(ans,j-i+1);
      }
   }
   cout<<ans<<endl;


}


int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   
  
  
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
      
      
      
}
