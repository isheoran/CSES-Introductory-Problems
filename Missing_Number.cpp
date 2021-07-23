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
    bool a[n+1]={0};
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        a[x]=1;
    }
    for(int i=1;i<n+1;i++)
    {
        if(a[i]==0)
        {
            cout<<i;
        }
    }
    return 0;
}
