#include<bits/stdc++.h>
using namespace std;
const int N= 10e5 + 10;
int hsn[N];
        int hsnele[N];

int main()
{ 
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    { 
        set <int> k;
        
        int n,temp=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        
             hsn[arr[i]]++;
               
            if(hsn[arr[i]]==1)
            {
                k.insert(i+1);
                hsnele[arr[i]]=i+1;
            }
            else
            {
                k.erase(hsnele[arr[i]]);
            }
            
            if(k.empty())
            cout<<-1<<" ";
            else
            cout<<*k.begin()<<" ";
            
          
        }
       
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            hsn[arr[i]]=0;
            hsnele[arr[i]]=0;
        }
    }
}
