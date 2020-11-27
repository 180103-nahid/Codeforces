#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int u=0,l=0,i;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]>64&&a[i]<97)
            u++;
        else
            l++;
    }
    if(u>l)
    {
        for(i=0;i<a.size();i++)
        {
            if(a[i]>96)
                a[i]-=32;
        }
    }
    else
    {
        for(i=0;i<a.size();i++)
        {
            if(a[i]>64&&a[i]<96)
                a[i]+=32;
        }
    }
    cout<<a<<endl;
    return 0;
}
