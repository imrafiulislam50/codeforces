#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    string s;
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        cin>>s;
        for(int j=1;j<s.size();j++)
        {
            if(s[j]=='+')
            {
            sum+=1;
            break;
        }
        else if(s[j]=='-')
        {
            sum-=1;
            break;

        }

    }
    }
    cout<<sum<<endl;


}
