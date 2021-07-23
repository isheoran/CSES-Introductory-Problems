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
    ll i=0;
    ll sum=0;
    ll count=0;
    ll s=n*(n+1)/2;
    if(s%2)
    {
        printf("NO\n");
    }
    else
    {
        s/=2;
        cout<<"YES\n";
        while(sum<s)
        {
            sum+=n-count;
            count++;
        }
        sum-=n-count+1;
        i=s-sum;
        cout<<count<<"\n";
        for(int i=0;i<count-1;i++)
        {
            cout<<n-i<<" ";
        }
        cout<<i<<"\n";
        cout<<n-count<<"\n";
        for(int k=1;k<=n-count+1;k++)
        {
            if(k==i)
            {
                continue;
            }
            cout<<k<<" ";
        }
    }
    return 0;
}
