#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,enter,exit,i=0,p=0;
    cin>>n;
    int arr[n];
    while(n--)
    {
        cin>>exit>>enter;
        p-=exit;
        p+=enter;
        arr[i]=p;
        i++;
    }
    int mx=0;
    for(auto elem:arr)
    {
        if(mx<elem)
            mx=elem;
    }
    cout<<mx<<endl;
    return 0;
}
