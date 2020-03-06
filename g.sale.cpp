
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tv,buy,arr[10000],i,sum;
    while(scanf("%d%d",&tv,&buy)!=EOF)
    {
        for(i=0;i<tv;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+tv);
        sum =0;
        for(i=0;i<buy;i++)
        {
            if(arr[i]<0)
        {
            sum = sum + arr[i];
        }
        }
        if(sum<0)
        {
            sum=sum*(-1);
        }
        printf("%d\n",sum);
    }

}
