#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,k;
     cin>>n;
     int ar[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&ar[i]);
     }
     for(j=0;j<n-1;j++)
     {
         for( k=0;k<(n-j-1);k++)
         {
             if(ar[k+1]>ar[k+2])
             {
                m=ar[k];
             ar[k]=ar[k+1];
             ar[k+1]= m;
             }
         }
     }
     for(i=0;i<n;i++)
     {
         printf("%d\n",ar[i]);
     }
     return 0;

}
