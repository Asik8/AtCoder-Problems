#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>
const int N=1e6+10;

void asikM(){
    ll n,x;
    cin >> n;
    vector<ll>m(N,0),vis(N,0);
    forni{
        cin >>x; 
        m[x]++;
    }
    ll c=0;
    fl(i,1,N){
        if(m[i]==1 && !vis[i]) c++;
        if(m[i]>0){
            for(int j=i*2;j<N;j+=i){
                vis[j]=1;
            }
        }
    }
    co(c)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}