#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
set<string>p;
 
void permute(string s,int l,int r)
{
    if(l==r)
    {
        p.insert(s);
        return ;
    }
    for(int i=l;i<=r;i++)
    {
        swap(s[i],s[l]);//swapping
        permute(s,l+1,r);//calling recursion
        swap(s[i],s[l]);//backtracking
    }
}
 
int main()
{
    #ifndef DEBUG
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #endif
    string s;
    cin>>s;
    int n=s.size();
    permute(s,0,n-1);
    cout<<p.size()<<"\n";
    for(auto i:p)
    {
        cout<<i<<endl;
    }
    return 0;
}
