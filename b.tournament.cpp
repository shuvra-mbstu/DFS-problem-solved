#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, arr1[100],arr2[100],i,j,res[100][100]={0},k,l;
    while(scanf("%d",&num)!=EOF)
    {
        for(i=1;i<=(num*(num-1)/2)-1;i++)
        {
            scanf("%d%d",&arr1[i],&arr2[i]);
            k=arr1[i];
            l=arr2[i];
            res[k][l]=1;
            res[l][k]=1;
        }
       int x= ((num*(num-1)/2)-1);
        for(j=1;j<x;j++)
        {
            for(k=1;k<x;k++)
            {
                if(j!=k&&res[j][k]!=1)
            {

                printf("%d\n",res[j][k]);
            }
            }
            if(j!=k&&res[j][k]==0)
            {
                break;
            }
        }
        if(j>k)
        {
            l=k;
            k=j;
            j=l;

        }
        printf("%d %d\n",k,j);
    }
}
