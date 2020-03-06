#include<bits/stdc++.h>
using namespace std;
string str[30];
int ver[30][30],row,colm,i,j,l=0,sum,coun;
void func(int i, int j)
{
    if(ver[i][j] == 1 || i >= row || j >= row || i < 0 || j < 0)
        return;

    if(str[i][j]=='1')
    {
        ver[i][j]=1;
        func(i + 1, j);
        func(i, j + 1);
        func(i - 1, j-1);
        func(i - 1, j);
        func(i, j-1);
        func(i + 1, j-1);
        func(i- 1, j+1);
        func(i + 1, j+1);
    }
}
int main()
{

    while(cin>>row)
    {
        l++;
        memset(ver,0,sizeof(ver));
        for(i=0; i<row; i++)
        {
            cin >> str[i];
        }

        sum=0;
        for(i=0; i<row; i++)
        {
            for(j=0; j<row; j++)
            {
                if((str[i][j]=='1')&&(ver[i][j]==0))
                {
                    sum++;
                    func(i,j);
                }
            }
        }
        cout<<"Image number "<< l <<" contains "<< sum <<" war eaglees."<<endl;
    }
    return 0;
}

