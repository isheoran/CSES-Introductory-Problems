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
    cout<<n<<" ";
    while(n!=1)
    {
        if(n%2)
        {
            n=n*3+1;
        }
        else
        {
            n/=2;
        }
        cout<<n<<" ";
    }
    return 0;
}
