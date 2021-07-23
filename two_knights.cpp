#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    #ifndef DEBUG
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #endif
    ll n;
    cin>>n;
    for(ll i=1;i<n+1;i++)
    {
        cout<<i*i*(i*i-1)/2-2*2*(i-1)*(i-2)<<"\n";
    }
    return 0;
}
