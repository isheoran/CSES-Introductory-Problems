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
    if(n==1)
    {
        printf("1");
    }
    else if(n==2||n==3||n==4)
    {
        if(n==4)
        {
            printf("2 4 1 3");
        }
        else
        printf("NO SOLUTION");
    }
    else if(n>4)
    {
        int a=1,b=ceil((float)n/2)+1;
        for(int i=1;i<=n;i++)
        {
            if(i%2)
            {
                cout<<a<<" ";
                a++;
            }
            else
            {
                cout<<b<<" ";
                b++;
            }
            
        }
    }
    return 0;
}
