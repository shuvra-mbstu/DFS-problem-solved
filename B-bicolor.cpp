#include<bits/stdc++.h>
using namespace std;
typedef pair< int, int > par;
map<par,int> mp;
memset(mp,0,sizeof(mp));
int j;
void dfs(int i)
{
    if(j==i&& )
    {
        return;
    }
    if(j%2==0)
    {
        mp[j]=2;
        j++;
        dfs(i);
    }
    if(j%2==1)
    {
        mp[j]=1;
        j++;
        dfs(i);
    }
}
int main()
{
    int node,edge,x,y;
    memset(v,0,sizeof(v));
    while(cin>>node>>edge)
    {
        for(i=0;i<edge;i++)
        {
        cin>>x>>y;
        mp.insert(par(x,y));
        }
      /* map<int >::iterator it;
        for(it=0;it<edge;it++)
        {

        }
        dfs(0);*/
        j=0;
        siz = mp.size();
        dfs(siz);
    }

}
