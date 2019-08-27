#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set<char>r;
    int i,j,c=0;
    cin>>s;
    j=s.size();
    for(int i=0;i<j;i++)
    {
        r.insert(s[i]);
    }

    if(r.size()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
