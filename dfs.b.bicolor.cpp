#include<bits/stdc++.h>
using namespace std;
int node, edge,k,res,sum=0, i, j,arr[107],l,a;
vector<int>v[107];
void dfs(int i)
{
    sum++;

    for(l=0;l<v[i].size();l++)
    {
        a = i;
        if(sum%2==0)
        {
            arr[l]=2;
            if(arr[a]!=0&&(arr[l]==arr[a]))
    {
        res=1;
        return;
    }
            dfs(l);

        }
        else
        {
            arr[l]=1;
            if(arr[a]!=0&&(arr[l]==arr[a]))
    {
        res=1;
        return;
    }
            dfs(l);
        }
    }
}
int main()
{
   while(cin>>node)
   {
       if(node==0)
       {
           break;
       }
       cin>>edge;
       res = 0;
       memset(arr,0,sizeof(arr));
       j= edge;
       while(j--)
       {
           cin>>i>>k;
           v[i].push_back(k);
           v[k].push_back(i);
       }
       for(k=0;k<edge;k++)
       {
           if(arr[i]==0)
           {
               dfs(i);
           }
       }
       if(res==1)
       {
           cout<<"NOT BICOLORABLE."<<endl;
       }
       else
       {
           cout<<"BICOLORABLE."<<endl;
       }
   }
   return 0;
}
