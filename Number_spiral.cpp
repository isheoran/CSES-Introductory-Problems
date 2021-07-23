#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    #ifndef DEBUG
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        ll ans=0;
        ll x,y;
        cin>>y>>x;
        if(x==y)
        {
            ans=x*x-x+1;
        }
        else if(x>y)
        {
            ans=x*x-x+1;
            if(x%2)
            {
                ans+=x-y;
            }
            else
            {
                ans-=x-y;
            }
            
        }
        else
        {
            ans=y*y-y+1;
            if(y%2)
            {
                ans-=y-x;
            }
            else
            {
                ans+=y-x;
            }
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}
