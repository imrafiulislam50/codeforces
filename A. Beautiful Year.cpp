#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    int a=0,b=0,c=0,d=0;
    while(a==b||a==c||a==d||b==c||b==d||c==d)
    {
        y+=1;
        a=y%10;
        b=(y/10)%10;
        c=(y/100)%10;
        d=y/1000;
            if (a!=b&& a!=c &&a!=d &&b!=c &&b!=d &&c!=d)
            break;
    }
    cout<<y<<endl;
}
