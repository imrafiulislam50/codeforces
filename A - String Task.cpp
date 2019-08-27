#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    int j;
     gets(s);
    strlwr(s);
     j=strlen(s)-1;

    //cin>>s;
  for (int i=0; i<=j; i++){
          if(s[i]=='a'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='i'||s[i]=='y')
        {
             continue;
         }
         else
         {
             printf(".%c",s[i]);
         }


    }
    return 0;

}
