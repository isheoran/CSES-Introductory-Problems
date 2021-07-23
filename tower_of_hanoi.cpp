#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
 
void print_paths(int n,char source,char helper,char target)
{
    if(n==0)
    {
        return;
    }
    print_paths(n-1,source,target,helper);
    cout<<source<<" "<<target<<"\n";
    print_paths(n-1,helper,source,target);
}
 
int main()
{
    #ifndef DEBUG
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #endif
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    print_paths(n,'1','2','3');
    return 0;
}
