#include<bits/stdc++.h>
using namespace std;
char ch1[1000000],ch2[1000000],c;
int main()
{
    int i,j,k,len,coun;
    while(scanf("%s%s",ch1,ch2)!=EOF)
    {
        coun=0;
        len=strlen(ch1);
        for(i=0; i<len; i++)
        {
            for(j=i; j<len; j++)
            {
                if(ch1[i]!=ch2[j]||ch1[i]==ch2[j+1])
                {
                    if((ch1[i]!=ch1[j+1])&&(ch1[i]==ch2[j+1])&&(ch1[j+1]==ch2[i]))
                    {
                        c=ch1[i];
                        ch1[i]=ch1[j+1];
                        ch1[j+1]=c;
                        coun++;
                    }
                }
            }
        }
        for(i=0; i<len; i++)
        {
            if(ch1[i]!=ch2[i])
            {
                coun++;
            }
        }
        printf("%d\n",coun);
    }
    return 0;
}
