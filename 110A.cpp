#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='4'||str[i]=='7')
            c++;
    }
    if(c==4||c==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
