#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int m=1e9+7;
 
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return ((((res%m) * (res%m))%m) * (a%m))%m;
    else
        return ((res%m) * (res%m))%m;
}
 
int main()
{
    #ifndef DEBUG
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #endif
    ll n;
    cin>>n;
    cout<<binpow(2,n);
    return 0;
}
