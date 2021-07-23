#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    #ifndef DEBUG
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #endif
    string s;
    cin>>s;
    int length=1,ans=1;
    int siiz=s.size();
    for(int i=1;i<siiz;i++)
    {
        if(s[i]==s[i-1])
        {
            length++;
        }
        else
        {
            ans=max(ans,length);
            length=1;
        }
    }
    ans=max(ans,length);
    cout<<ans;
    return 0;
}
