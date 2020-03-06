#include<bits/stdc++.h>
using namespace std;
string str[107];
int ver[108][108],row,colm,i,j,l,sum,coun;
void func(int i, int j)
{
    if(ver[i][j] == 1 || i >= row || j >= colm || i < 0 || j < 0)
        return;

    if(str[i][j]=='@')
    {
        ver[i][j]=1;
        func(i + 1, j);
        func(i , j + 1);
        func(i - 1, j-1);
        func(i - 1, j);
        func(i , j-1);
        func(i + 1, j-1);
        func(i- 1, j+1);
        func(i + 1, j+1);
    }
}
int main()
{

    while(cin>>row>>colm)
    {
        memset(ver,0,sizeof(ver));
        if(row==0)
        {
            break;
        }
        for(i=0; i<row; i++)
        {
            cin >> str[i];
        }

        sum=0;
        for(i=0; i<row; i++)
        {
            for(j=0; j<colm; j++)
            {
                if((str[i][j]=='@')&&(ver[i][j]==0))
                {
                    sum++;
                   func(i,j);
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

