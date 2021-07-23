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
    vector<int>h(26);
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        h[s[i]-'A']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++)
    {
        if(h[i]%2)
        {
            cnt++;
        }
        if(cnt>(n%2))
        {
            cout<<"NO SOLUTION\n";
            return 0;
        }
    }
    int f=0,b=0;
    for(int i=0;i<26;i++)
    {
        if(h[i]%2)
        {
            h[i]--;
            s[(n+1)/2-1]='A'+i;
        }
        while(h[i])
        {
            if(f>b)
            {
                s[n-1-b]='A'+i;
                b++;
                h[i]--;
            }
            else
            {
                s[f]='A'+i;
                f++;
                h[i]--;
            }
            
        }
    }
    cout<<s;
    return 0;
}
