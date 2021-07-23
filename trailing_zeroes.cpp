#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    #ifndef DEBUG
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #endif
    int n;
    cin>>n;
    ll sum=0;
    int res=n/5;
    while(res)
    {
        sum+=res;
        res/=5;
    }
    cout<<sum;
    return 0;
}
