#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll mod(ll a,ll b)
{
    if(a>b)
    return a-b;
    return b-a;
}
 
ll summation(vector<int>v)
{
    ll sum=0;
    for(auto i:v)
    sum+=i;
    return sum;
}
 
vector<int>subset;
ll mindiff=INT_MAX,d=0;
 
void search(vector<int>v,int k,int n)
{
    if(k==n)
    {
        ll diff=mod(d-summation(subset),summation(subset));
        mindiff=min(mindiff,diff);
        return;
    }
    subset.push_back(v[k]);
    search(v,k+1,n);
    subset.pop_back();
    search(v,k+1,n);
}
 
int main()
{
    #ifndef DEBUG
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #endif
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    cin>>i;
    d=summation(v);
    search(v,0,n);
    cout<<mindiff;
    return 0;
}
