#include<iostream>
using namespace std;
 
int cnt=0;
 
bool isSafe(char a[8][8],int i,int j)
{
    if(a[i][j]=='*')return false;
    for(int x=0;x<i;x++)
    if(a[x][j]=='q')return false;
    for(int x=i-1,y=j-1;x>=0&&y>=0;x--,y--)
    if(a[x][y]=='q')return false;
    for(int x=i-1,y=j+1;x>=0&&y<8;x--,y++)
    if(a[x][y]=='q')return false;
 
    return true;
}
 
bool Queen(char a[8][8],int i)
{
    if(i>=8)
    {
        cnt++;
        return true;
    }
    bool res=false;
    for(int j=0;j<8;j++)
    {
        if(isSafe(a,i,j))
        {
            a[i][j]='q';
            res=res|Queen(a,i+1);
            a[i][j]='.';
        }
    }
    return res;
}
 
int main()
{
    char board[8][8];
    for(int i=0;i<8;i++)
    for(int j=0;j<8;j++)
    cin>>board[i][j];
    if(Queen(board,0))
    cout<<cnt;
    else
    cout<<"0";
}
