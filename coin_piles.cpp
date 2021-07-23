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
        ll a,b;
        cin>>a>>b;
        if((2*b-a>=0)&&(2*a-b>=0))
        {
            if((2*b-a)%3==0&&(2*a-b)%3==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
            
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    return 0;
}
