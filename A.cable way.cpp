#include<bits/stdc++.h>
using namespace std;
int main()
{
    int red, green, blue, sum,i,j,num1=0,num2=0,num3=0,coun;
    while(scanf("%d%d%d",&red,&green,&blue)!=EOF)
    {
        coun=0;
        sum=30;
        num1=red/2;
        if(red%2!=0)
        {
            num1=num1+1;
        }
        num2=green/2;
        if(green%2!=0)
        {
            num2=num2+1;
        }
        num3=blue/2;
        if(blue%2!=0)
        {
            num3=num3+1;
        }
        while((num1>0)||(num2>0)||(num3>0))
        {
            coun++;

            if(coun%3==1)
            {
                num1--;
                if(coun!=1)
                {
                    sum ++;
                }
            }
            else if(coun%3==2)
            {
                num2--;
                sum++;
            }
            else if(coun %3==0)
            {
                num3--;
                sum++;
            }
        }
        printf("%d\n",sum);
    }
}
