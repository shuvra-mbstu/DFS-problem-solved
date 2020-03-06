#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num[5007],i,j,k,coun,arr[5007];
    while(scanf("%d",&num1)!=EOF)
    {
        coun =0;
        for(i=0;i<num1;i++)
        {
            scanf("%d",&num[i]);
            arr[i]=i+1;
        }
        for(j=0;j<num1;j++)
        {
            k=0;
            for(i=0;i<num1;i++)
            {
                if(arr[j]==num[i])
                {
                    k=1;
                    break;
                }
            }
            if(k!=1)
            {
                coun++;
            }
        }

        printf("%d\n",coun);
    }
}
