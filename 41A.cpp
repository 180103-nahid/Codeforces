#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,i,j;
    string a,b;
    cin>>a>>b;
    for(i=0,j=(b.size()-1);i<a.size();i++,j--)
    {
        if(a[i]!=b[j])
            c++;
    }
    if(c==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
