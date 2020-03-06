#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st[100];
    int row, colm,i,j=0,k,arr[100],vfs[100][100];
    while(cin>>colm>>row)
    {
        memset(arr,0,sizeof(arr));
         memset(vfs,0,sizeof(vfs));
        j++;
        for(i=0;i<colm;i++)
        {
            cin>>st;
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<colm;j++)
            {
                if((st[i][j]=='*')&&(vfs[i][j]==0))
                {
                    vfs[i][j]=1;

                }
            }
        }
    }
}
